//
// Created by Michal_Marszalek on 02.04.2020.
//

#include "PictureLoader.h"
#include "BMP_HEADER.h"
#include <cstdio>
#include <memory>
#include <include/DEFINES.h>
#include <include/Encryption.h>

std::shared_ptr<BMP> PictureLoader::load(const std::string &name, int decrypt) {
    FILE *f = fopen(name.c_str(), "rb");
    std::shared_ptr<FILE> file = {f, fclose};
    auto result = std::make_shared<BMP>();

    if (!file) { throw std::runtime_error("Wrong file name"); }
    /**Header info*/
    BMP_HEADER header = BMP_HEADER::load(f);
    result->header = header;

    if (header.signature[0] != 0x42 || header.signature[1] != 0x4D) { //BM
        if (header.signature[0] == 0x42 && header.signature[1] == 0x41) { //BA
            BMP_ARRAY_HEADER &array = *reinterpret_cast<BMP_ARRAY_HEADER *>(&header);
            result->array_header = array;

            header = BMP_HEADER::load(f); //load first possible image from array, discard array
            result->header = header;
        } else {
            throw std::runtime_error("Wrong file signature");
        }
    }

    /**Dib header*/
    uint32_t dib_size{};
    fread(&dib_size, 4, 1, f);
    fseek(f, -4, SEEK_CUR);

    switch (dib_size) {
        case 12:
            result->dib = BITMAP_M_COREHEADER::load(f);
            break;
        case 64:
        case 16:
            result->dib = OS22XBITMAP_M_HEADER::load(f);
            break;
        case 40:
            result->dib = BITMAP_M_INFOHEADER::load(f);
            break;
        case 52:
            result->dib = BITMAP_M_V2INFOHEADER::load(f);
            break;
        case 56:
            result->dib = BITMAP_M_V3INFOHEADER::load(f);
            break;
        case 108:
            result->dib = BITMAP_M_V4HEADER::load(f);
            break;
        case 124:
            result->dib = BITMAP_M_V5HEADER::load(f);
            break;
        default:
            throw std::runtime_error("Wrong DIB header size");
    }

    /**Bit mask optional when BITMAP_M_INFOHEADER and compressionType => BI_BITFIELDS || BI_ALPHABITFIELDS*/
    /**Loaded in BITMAP_M_INFOHEADER::load*/

    /**Color table (semi optional)*/
    int32_t color_table_size = header.file_offset - ftell(f);

    int32_t paletteColorsSize = 3;
    switch (result->dib.dibSize) {
        case 12:
        case 16:
        case 64:
            paletteColorsSize = 3;
            break;
        default:
            paletteColorsSize = 4;
    }

    switch (result->dib.bitsPerPixel) {
        case 1:
        case 4:
        case 8: {
            uint32_t paletteColorsNumber = result->dib.paletteColorsNumber;
            if (result->dib.paletteColorsNumber == 0) {
                paletteColorsNumber = 1u << result->dib.bitsPerPixel;
            }

            /**Load palette*/
            if (paletteColorsNumber * paletteColorsSize > color_table_size) {
                throw std::runtime_error("Wrong palette size");
            }

            result->palette.reserve(paletteColorsNumber);
            for (uint32_t i = 0; i < paletteColorsNumber; ++i) {
                Color c;
                fread(&c, paletteColorsSize, 1, f);
                result->palette.push_back(c);
            }
            ///dibSize == 40 added 4bit as reserved but some version of windows use is as alpha value!!!
            if (paletteColorsSize == 4) {
                bool uses_alpha = false;
                for (auto &c : result->palette) {
                    if (c.alpha != 0) {
                        uses_alpha = true;
                        break;
                    }
                }
                if (!uses_alpha) {
                    for (auto &c : result->palette) {
                        c.alpha = 255;
                    }
                }
            }
        }
            break;
        case 16:
        case 24:
        case 32:
            /**No palette here*/
            /**Use bit mask*/
            break;
        default:
            throw std::runtime_error("Wrong bitsPerPixel value");
    }

    /**Load optional gap between pixel array and color palette*/
    {
        uint32_t sizeOfGap = header.file_offset - ftell(f);
        if (ftell(f) >= header.file_offset) {
            //should throw as file_offset is wrong
        } else {
            result->gap1.resize(sizeOfGap);
            fread(result->gap1.data(), 1, sizeOfGap, f);
        }
    }

    /**Pixel array*/
    ///fseek(f, header.file_offset, SEEK_SET);
    {
        uint32_t sizeOfRawImage;
        switch (result->dib.dibSize) {
            case 12: {
                auto sizeOfRow = ((result->dib.bitsPerPixel * result->dib.width + 31) / 32) * 4;
                sizeOfRawImage = sizeOfRow * std::abs(result->dib.height);
            }
                break;
            default:
                if (result->dib.rawImageSize == 0 && result->dib.compressionType != BmpCompression::BI_RGB) {
                    if (result->dib.width != 0 && result->dib.height != 0) {
                        throw std::runtime_error("Wrong raw image size with compression type");
                    }
                }
                if (result->dib.rawImageSize == 0) {
                    auto sizeOfRow = ((result->dib.bitsPerPixel * result->dib.width + 31) / 32) * 4;
                    sizeOfRawImage = sizeOfRow * std::abs(result->dib.height);
                } else {
                    sizeOfRawImage = result->dib.rawImageSize;
                }
                break;
        }

        {
            switch (decrypt) {
                case 0: {
                    result->rawPixel.resize(sizeOfRawImage);
                    fread(result->rawPixel.data(), 1, sizeOfRawImage, f);
                    break;
                }
                case 1: {
                    uint32_t sizeEn = Encryption::getDecryptSize(sizeOfRawImage);

                    result->rawPixel.resize(sizeEn);
                    fread(result->rawPixel.data(), 1, sizeEn, f);

                    result->rawPixel = Encryption::decrypt(result->rawPixel);

                    for (uint32_t i = sizeOfRawImage; i < result->rawPixel.size(); ++i) {
                        if (result->rawPixel[i] != 0) {
                            throw std::runtime_error("There should be zero from decrypt");
                        }
                    }

                    result->rawPixel.resize(sizeOfRawImage);
                    result->rawPixel.shrink_to_fit();

                    break;
                }
                case 2: {
                    uint32_t sizeEn = Encryption::getDecryptSize(sizeOfRawImage);

                    result->rawPixel.resize(sizeEn);
                    fread(result->rawPixel.data(), 1, sizeEn, f);

                    result->rawPixel = Encryption::CBCdecrypt(result->rawPixel);

                    for (uint32_t i = sizeOfRawImage; i < result->rawPixel.size(); ++i) {
                        if (result->rawPixel[i] != 0) {
                            throw std::runtime_error("There should be zero from decrypt");
                        }
                    }

                    result->rawPixel.resize(sizeOfRawImage);
                    result->rawPixel.shrink_to_fit();

                    break;
                }
                default:
                    throw std::runtime_error("Wrong decryption");
            };
        }
    }


    /**ICC Color Profile (optional) v5*/
    if (result->dib.dibSize == 124) {
        /**Load optional gap between pixel array and icc profile*/
        uint32_t iccOffset = sizeof(BMP_HEADER) + result->dib.ProfileData;
        {
            uint32_t sizeOfGap = iccOffset - ftell(f);
            result->gap2.resize(sizeOfGap);
            fread(result->gap2.data(), 1, sizeOfGap, f);
        }

        fseek(f, iccOffset, SEEK_SET);
        /** Load ICC*/
        ///TODO: Load icc data

    } else {
        /**Load optional gap between pixel array and end of file*/
        {
            uint32_t sizeOfGap = header.file_size - ftell(f);
            if (ftell(f) >= header.file_size) {
                //should throw as file_size is wrong
            } else {
                result->gap2.resize(sizeOfGap);
                fread(result->gap2.data(), 1, sizeOfGap, f);
            }
        }
    }

    /**Check if readed end on file*/
    if (feof(f)) {
        throw std::runtime_error("File ended before actual end");
    }

    /**Check if header.file_size is true end of file*/
    {
        uint8_t c;
        while (true) {
            fread(&c, 1, 1, f);
            if (feof(f)) { break; }
            result->gap3.push_back(c);
        }
    }

    return result;
}

sf::Texture PictureLoader::createPicture(const std::shared_ptr<const BMP> &bmp) {

    switch (bmp->dib.compressionType) {
        case BmpCompression::BI_RGB:
            if (bmp->dib.bitsPerPixel == 32) {
                if (bmp->dib.dibSize == sizeof(BITMAP_M_INFOHEADER)) {
                    return ReadRgb32Slow(bmp);
                } else {
                    return ReadBitFields(bmp, 0xFF00'0000, 0xFF'0000, 0xFF00, 0xFF);
                }
            } else if (bmp->dib.bitsPerPixel == 24) {
                return ReadBitFields(bmp, 0xFF0000, 0xFF00, 0xFF);
            } else if (bmp->dib.bitsPerPixel == 16) {
                return ReadBitFields(bmp, 0x7C00, 0x3E0, 0x1F);
            } else if (bmp->dib.bitsPerPixel <= 8) {
                return ReadRgbPalette(bmp);
            } else {
                throw std::runtime_error("Not supported bitsPerPixel");
            }
        case BmpCompression::BI_RLE8:
            return ReadRle8(bmp);
        case BmpCompression::BI_RLE4:
            return ReadRle4(bmp);
        case BmpCompression::BI_BITFIELDS:
        case BmpCompression::BI_ALPHABITFIELDS:
            return ReadBitFields(bmp);
        case BmpCompression::RLE_24:
            return ReadRle24(bmp);
        case BmpCompression::BI_JPEG:
        case BmpCompression::BI_PNG:
        case BmpCompression::BI_CMYK:
        case BmpCompression::BI_CMYKRLE8:
        case BmpCompression::BI_CMYKRLE4:
        case BmpCompression::Huffman:
            throw std::runtime_error("Unsupported compression type");
    }
    throw std::runtime_error("Some code that shouldn't go here");
}

uint32_t PictureLoader::CalculateRightShift(uint32_t n) {
    uint32_t count = 0;
    while (n > 0) {
        if ((1u & n) == 0) {
            count++;
        } else {
            break;
        }

        n >>= 1u;
    }

    return count;

}

uint32_t PictureLoader::CountBits(uint32_t n) {
    uint32_t count = 0;
    while (n != 0) {
        count++;
        n &= n - 1;
    }

    return count;
}

sf::Texture PictureLoader::ReadRgb32Slow(std::shared_ptr<const BMP> bmp) {
    sf::Image image;
    sf::Vector2i size = {bmp->dib.width, std::abs(bmp->dib.height)};
    image.create(size.x, size.y);
    auto setPixel = [&](uint32_t x, uint32_t y, const sf::Color c) {
        if (bmp->dib.height > 0) {
            image.setPixel(x, size.y - y - 1, c);
        } else {
            image.setPixel(x, y, c);
        }
    };

    auto pixel = PictureLoader::getUncompressedPixel32(bmp);

    bool useAlpha = false;
    for (auto &it : pixel) {
        if (it & 0xFF00'0000) {
            useAlpha = true;
            break;
        }
    }

    for (uint32_t y = 0; y < size.y; ++y) {
        for (uint32_t x = 0; x < size.x; ++x) {
            auto index = pixel[x + y * size.x];

            sf::Color c;

            c.r = (index & 0xFF'0000u) >> 16u;
            c.g = (index & 0xFF00u) >> 8u;
            c.b = index & 0xFFu;
            if (useAlpha) {
                c.a = (index & 0xFF00'0000) >> 24u;
            }

            setPixel(x, y, c);
        }
    }


    sf::Texture t0;
    t0.loadFromImage(image);
    return t0;
}

sf::Texture PictureLoader::ReadRgbPalette(std::shared_ptr<const BMP> bmp) {
    sf::Image image;
    sf::Vector2i size = {bmp->dib.width, std::abs(bmp->dib.height)};
    image.create(size.x, size.y);
    auto setPixel = [&](uint32_t x, uint32_t y, const sf::Color c) {
        if (bmp->dib.height > 0) {
            image.setPixel(x, size.y - y - 1, c);
        } else {
            image.setPixel(x, y, c);
        }
    };

    auto pixel = PictureLoader::getUncompressedPixel32(bmp);

    for (uint32_t y = 0; y < size.y; ++y) {
        for (uint32_t x = 0; x < size.x; ++x) {
            auto index = pixel[x + y * size.x];

            sf::Color c;

            c = bmp->palette[index];

            setPixel(x, y, c);
        }
    }

    sf::Texture t0;
    t0.loadFromImage(image);
    return t0;
}

sf::Texture PictureLoader::ReadRle4(std::shared_ptr<const BMP> bmp) {
    sf::Image image;
    sf::Vector2i size = {bmp->dib.width, std::abs(bmp->dib.height)};
    image.create(size.x, size.y);
    auto setPixel = [&](uint32_t x, uint32_t y, const sf::Color c) {
        if (bmp->dib.height > 0) {
            image.setPixel(x, size.y - y - 1, c);
        } else {
            image.setPixel(x, y, c);
        }
    };

    uint64_t count = 0;
    bool new_line = false;
    auto setPixelC = [&](const sf::Color c) {
        new_line = false;
        setPixel(count % size.x, count / size.x, c);
        ++count;
        if (count % size.x == 0) { new_line = true; }
    };

    const sf::Color skipped = {0, 0, 0, 255};

    for (auto it = bmp->rawPixel.begin(); it != bmp->rawPixel.end();) {
        auto cmd = *(it++);
        if (cmd == 0) {
            cmd = *(it++);
            switch (cmd) {
                case 0: { ///end-of-scan-line marker
                    if (!new_line) {
                        while (!new_line) {
                            setPixelC(skipped);
                        }
                    }
                    new_line = false;
                }
                    break;
                case 1: { /// RLE data marker, end of decoding
                    while (count < size.x * size.y) {
                        setPixelC(skipped);
                    }
                    for (; it != bmp->rawPixel.end(); ++it) {
                        bmp->additional_data.push_back(*it);
                    }
                }
                    break;
                case 2: { ///delta
                    auto dx = *(it++);
                    auto dy = *(it++);
                    auto new_count = count + dy * size.x + dx;
                    while (count < new_count) {
                        setPixelC(skipped);
                    }
                }
                    break;
                default: { ///unencoded run ,absolute mode
                    sf::Color color;
                    uint32_t index{};

                    for (uint32_t i = 0; i < cmd; ++i) {
                        if (i % 2 == 0) {
                            index = *(it++);
                            color = bmp->palette[(index & 0xF0u) >> 4u];
                        } else {
                            color = bmp->palette[index & 0x0Fu];
                        }
                        setPixelC(color);
                    }
                    // Absolute mode data is aligned to two-byte word-boundary.
                    auto padding = ((cmd + 1) / 2u) & 1u;
                    if (padding) { ++it; }
                }
                    break;
            }
        } else { ///encoded run
            sf::Color color;
            auto index = *(it++);

            for (uint32_t i = 0; i < cmd; ++i) {
                if (i % 2 == 0) {
                    color = bmp->palette[(index & 0xF0u) >> 4u];
                } else {
                    color = bmp->palette[index & 0x0Fu];
                }
                setPixelC(color);
            }
        }
    }

    sf::Texture t0;
    t0.loadFromImage(image);
    return t0;
}

//8bit mode
sf::Texture PictureLoader::ReadRle8(std::shared_ptr<const BMP> bmp) {
    sf::Image image;
    sf::Vector2i size = {bmp->dib.width, std::abs(bmp->dib.height)};
    image.create(size.x, size.y);
    auto setPixel = [&](uint32_t x, uint32_t y, const sf::Color c) {
        if (bmp->dib.height > 0) {
            image.setPixel(x, size.y - y - 1, c);
        } else {
            image.setPixel(x, y, c);
        }
    };

    uint64_t count = 0;
    bool new_line = false;
    auto setPixelC = [&](const sf::Color c) {
        new_line = false;
        setPixel(count % size.x, count / size.x, c);
        ++count;
        if (count % size.x == 0) { new_line = true; }
    };

    const sf::Color skipped = {0, 0, 0, 255};

    for (auto it = bmp->rawPixel.begin(); it != bmp->rawPixel.end();) {
        auto cmd = *(it++);
        if (cmd == 0) {
            cmd = *(it++);
            switch (cmd) {
                case 0: { ///end-of-scan-line marker
                    if (!new_line) {
                        while (!new_line) {
                            setPixelC(skipped);
                        }
                    }
                    new_line = false;
                }
                    break;
                case 1: { /// RLE data marker, end of decoding
                    while (count < size.x * size.y) {
                        setPixelC(skipped);
                    }
                    for (; it != bmp->rawPixel.end(); ++it) {
                        bmp->additional_data.push_back(*it);
                    }
                }
                    break;
                case 2: { ///delta
                    auto dx = *(it++);
                    auto dy = *(it++);
                    auto new_count = count + dy * size.x + dx;
                    while (count < new_count) {
                        setPixelC(skipped);
                    }
                }
                    break;
                default: { ///unencoded run, absolute mode
                    for (uint32_t i = 0; i < cmd; ++i) {
                        auto color = bmp->palette[*(it++)];
                        setPixelC(color);
                    }
                    // Absolute mode data is aligned to two-byte word-boundary.
                    auto padding = cmd & 1u;
                    if (padding) { ++it; }
                }
                    break;
            }
        } else { ///encoded run
            auto color = bmp->palette[*(it++)];
            for (uint32_t i = 0; i < cmd; ++i) {
                setPixelC(color);
            }
        }
    }

    sf::Texture t0;
    t0.loadFromImage(image);
    return t0;
}

sf::Texture PictureLoader::ReadBitFields(std::shared_ptr<const BMP> bmp, uint32_t RedMaskDef, uint32_t GreenMaskDef,
                                         uint32_t BlueMaskDef, uint32_t AlphaMaskDef) {
    sf::Image image;
    sf::Vector2i size = {bmp->dib.width, std::abs(bmp->dib.height)};
    image.create(size.x, size.y);
    auto setPixel = [&](uint32_t x, uint32_t y, const sf::Color c) {
        if (bmp->dib.height > 0) {
            image.setPixel(x, size.y - y - 1, c);
        } else {
            image.setPixel(x, y, c);
        }
    };

    auto pixel = PictureLoader::getUncompressedPixel32(bmp);

    auto RedMask = bmp->dib.RedMask;
    auto GreenMask = bmp->dib.GreenMask;
    auto BlueMask = bmp->dib.BlueMask;
    auto AlphaMask = bmp->dib.AlphaMask;

    if (!RedMask && !GreenMask && !BlueMask && !AlphaMask) {
        RedMask = RedMaskDef;
        GreenMask = GreenMaskDef;
        BlueMask = BlueMaskDef;
        AlphaMask = AlphaMaskDef;
    }

    auto NullMask = RedMask | GreenMask | BlueMask | AlphaMask;
    NullMask = ~NullMask;
    NullMask &= 0xFFFFFFFF >> (32u - bmp->dib.bitsPerPixel);

    uint32_t rightShiftRedMask = CalculateRightShift(RedMask);
    uint32_t rightShiftGreenMask = CalculateRightShift(GreenMask);
    uint32_t rightShiftBlueMask = CalculateRightShift(BlueMask);
    uint32_t rightShiftAlphaMask = CalculateRightShift(AlphaMask);

    uint32_t bitsRedMask = CountBits(RedMask);
    uint32_t bitsGreenMask = CountBits(GreenMask);
    uint32_t bitsBlueMask = CountBits(BlueMask);
    uint32_t bitsAlphaMask = CountBits(AlphaMask);

    double invMaxValueRed = 255.0 / (0xFFFFFFFF >> (32 - bitsRedMask));
    double invMaxValueGreen = 255.0 / (0xFFFFFFFF >> (32 - bitsGreenMask));
    double invMaxValueBlue = 255.0 / (0xFFFFFFFF >> (32 - bitsBlueMask));
    double invMaxValueAlpha = 255.0 / (0xFFFFFFFF >> (32 - bitsAlphaMask));

    for (uint32_t y = 0; y < size.y; ++y) {
        for (uint32_t x = 0; x < size.x; ++x) {
            auto index = pixel[x + y * size.x];

            sf::Color c;

            c.r = ((RedMask & index) >> rightShiftRedMask) * invMaxValueRed;
            c.g = ((GreenMask & index) >> rightShiftGreenMask) * invMaxValueGreen;
            c.b = ((BlueMask & index) >> rightShiftBlueMask) * invMaxValueBlue;

            if (AlphaMask != 0) {
                c.a = ((AlphaMask & index) >> rightShiftAlphaMask) * invMaxValueAlpha;
            }

            ///additional data hidden!!!
            if (NullMask) {
                auto l = NullMask & index;
                if (l) {
                    bmp->additional_data.push_back(l & 0xFFu);
                    bmp->additional_data.push_back((l >> 8u) & 0xFFu);
                    bmp->additional_data.push_back((l >> 16u) & 0xFFu);
                    bmp->additional_data.push_back((l >> 24u) & 0xFFu);
                }
            }

            setPixel(x, y, c);
        }
    }

    sf::Texture t0;
    t0.loadFromImage(image);
    return t0;
}

sf::Texture PictureLoader::ReadRle24(std::shared_ptr<const BMP> bmp) {
    sf::Image image;
    sf::Vector2i size = {bmp->dib.width, std::abs(bmp->dib.height)};
    image.create(size.x, size.y);
    auto setPixel = [&](uint32_t x, uint32_t y, const sf::Color c) {
        if (bmp->dib.height > 0) {
            image.setPixel(x, size.y - y - 1, c);
        } else {
            image.setPixel(x, y, c);
        }
    };

    uint64_t count = 0;
    bool new_line = false;
    auto setPixelC = [&](const sf::Color c) {
        new_line = false;
        setPixel(count % size.x, count / size.x, c);
        ++count;
        if (count % size.x == 0) { new_line = true; }
    };

    const sf::Color skipped = {0, 0, 0, 255};

    for (auto it = bmp->rawPixel.begin(); it != bmp->rawPixel.end();) {
        auto cmd = *(it++);
        if (cmd == 0) {
            cmd = *(it++);
            switch (cmd) {
                case 0: { ///end-of-scan-line marker
                    if (!new_line) {
                        while (!new_line) {
                            setPixelC(skipped);
                        }
                    }
                    new_line = false;
                }
                    break;
                case 1: { /// RLE data marker, end of decoding
                    while (count < size.x * size.y) {
                        setPixelC(skipped);
                    }
                    for (; it != bmp->rawPixel.end(); ++it) {
                        bmp->additional_data.push_back(*it);
                    }
                }
                    break;
                case 2: { ///delta
                    auto dx = *(it++);
                    auto dy = *(it++);
                    auto new_count = count + dy * size.x + dx;
                    while (count < new_count) {
                        setPixelC(skipped);
                    }
                }
                    break;
                default: { ///unencoded run, absolute mode
                    for (uint32_t i = 0; i < cmd; ++i) {
                        sf::Color color;
                        color.b = *(it++);
                        color.g = *(it++);
                        color.r = *(it++);
                        setPixelC(color);
                    }
                    // Absolute mode data is aligned to two-byte word-boundary.
                    auto padding = (cmd * 3u) & 1u;
                    if (padding) { ++it; }
                }
                    break;
            }
        } else { ///encoded run
            sf::Color color;
            color.b = *(it++);
            color.g = *(it++);
            color.r = *(it++);
            for (uint32_t i = 0; i < cmd; ++i) {
                setPixelC(color);
            }
        }
    }

    sf::Texture t0;
    t0.loadFromImage(image);
    return t0;
}

std::vector<uint32_t> PictureLoader::getUncompressedPixel32(const std::shared_ptr<const BMP> &bmp) {
    std::vector<uint32_t> result;

    sf::Vector2i size = {bmp->dib.width, std::abs(bmp->dib.height)};
    result.reserve(size.x * size.y);

    uint32_t byte_per_pixel = bmp->dib.bitsPerPixel / 8;

    auto it = bmp->rawPixel.begin();
    for (uint32_t y = 0; y < size.y; ++y) {
        for (uint32_t x = 0; x < size.x;) {
            uint32_t pixel = 0;
            if (byte_per_pixel != 0) {
                for (uint32_t i = 0; i < byte_per_pixel; ++i) {
                    uint32_t tym = *(it++);
                    pixel |= tym << (8u * i);
                }
                if (bmp->dib.dibSize == sizeof(BITMAP_M_INFOHEADER) && bmp->dib.bitsPerPixel == 16 &&
                    bmp->dib.compressionType == BmpCompression::BI_BITFIELDS) {
                    ///16bit mode in v3 WINDOWS NT is saved in big endian mode
                    pixel = ((pixel & 0xFFu) << 8u) | ((pixel & 0xFF00u) >> 8u);
                }
                result.push_back(pixel);
                ++x;
            } else {
                auto pixels_in_byte = 8 / bmp->dib.bitsPerPixel;
                pixel = *(it++);
                for (uint32_t i = 0; i < pixels_in_byte; ++i) {
                    uint32_t mask = 0xFFu >> static_cast<uint32_t>(8 - bmp->dib.bitsPerPixel);
                    result.push_back(pixel & (mask << (7u - i)));
                    ++x;
                }
            }
        }
        /**To 4baits*/
        uint32_t padding = (size.x * byte_per_pixel) % 4;
        if (byte_per_pixel == 0) {
            auto bit = size.x * bmp->dib.bitsPerPixel;
            auto byte = (bit + 7) / 8;
            padding = byte % 4;
        }
        if (padding != 0) {
            for (uint32_t i = 0; i < (4 - padding); ++i) {
                auto l = *(it++);
                if (l) { bmp->additional_data.push_back(l); }
            }
        }
    }

    return result;
}

void PictureLoader::savePicture(const sf::Texture &picture, const std::string &name, int encrypt) {
    sf::Image image = picture.copyToImage();

    FILE *f = fopen(name.c_str(), "wb");
    std::shared_ptr<FILE> file = {f, fclose};

    if (!file) { throw std::runtime_error("Can't save file"); }

    uint32_t sizeOfRow = ((32 * image.getSize().x + 31) / 32) * 4;
    uint32_t sizeOfRawImage = sizeOfRow * image.getSize().y;

    std::vector<uint8_t> pixelSaved;
    {
        for (uint32_t y = 0; y < image.getSize().y; ++y) {
            for (uint32_t x = 0; x < image.getSize().x; ++x) {
                auto color = image.getPixel(x, y);
                pixelSaved.push_back(color.b);
                pixelSaved.push_back(color.g);
                pixelSaved.push_back(color.r);
                pixelSaved.push_back(color.a);
            }
            /**To 4baits*/
            uint32_t padding = (image.getSize().x * 4) % 4;
            if (padding != 0) {
                pixelSaved.insert(pixelSaved.end(), (4 - padding), 0);
            }
        }
    }

    if (pixelSaved.size() != sizeOfRawImage) {
        throw std::runtime_error("Wrong sizeOfRawImage in saving");
    }

    {
        switch (encrypt) {
            case 0:
                break;
            case 1:
                pixelSaved = Encryption::encrypt(pixelSaved);
                break;
            case 2:
                pixelSaved = Encryption::CBCencrypt(pixelSaved);
                break;
            default:
                throw std::runtime_error("Wrong decryption");
        };
    }

    BMP_HEADER bmpHeader;
    bmpHeader.signature[0] = 'B';
    bmpHeader.signature[1] = 'M';
    bmpHeader.file_size = sizeof(BMP_HEADER) + sizeof(BITMAP_M_INFOHEADER) + pixelSaved.size();
    bmpHeader.reserved1 = 0;
    bmpHeader.reserved2 = 0;
    bmpHeader.file_offset = sizeof(BMP_HEADER) + sizeof(BITMAP_M_INFOHEADER);
    ///BITMAP_M_V3INFOHEADER becouse BITMAP_M_INFOHEADER + RGBA mask

    DIBHEADER dibheader;
    dibheader.dibSize = sizeof(BITMAP_M_INFOHEADER);
    dibheader.width = image.getSize().x;
    dibheader.height = -image.getSize().y;
    dibheader.planesNumber = 1;
    dibheader.bitsPerPixel = 32;
    dibheader.compressionType = BmpCompression::BI_RGB;
    dibheader.rawImageSize = sizeOfRawImage;
    dibheader.XPixelsPerM = 1000;
    dibheader.YPixelsPerM = 1000;
    dibheader.paletteColorsNumber = 0;
    dibheader.importantColors = 0;

    dibheader.RedMask = 0xFF00'0000;
    dibheader.GreenMask = 0xFF'0000;
    dibheader.BlueMask = 0xFF00;
    dibheader.AlphaMask = 0xFF;

    BMP_HEADER::save(f, bmpHeader);
    BITMAP_M_INFOHEADER::save(f, dibheader);

    fwrite(pixelSaved.data(), 1, pixelSaved.size(), f);
}

