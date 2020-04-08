//
// Created by Michal_Marszalek on 02.04.2020.
//

#include "PictureLoader.h"
#include "BMP_HEADER.h"
#include <cstdio>
#include <memory>

std::shared_ptr<BMP> PictureLoader::load(const std::string &name) {
    FILE *f = fopen(name.c_str(), "rb");
    std::shared_ptr<FILE> file = {f, fclose};
    auto result = std::make_shared<BMP>();

    if (!file) { return {}; }
    /**Header info*/
    BMP_HEADER header = BMP_HEADER::load(f);
    result->header = header;

    if (header.signature[0] != 0x42 || header.signature[1] != 0x4D) {
        throw std::runtime_error("Wrong file signature");
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
        result->gap1.resize(sizeOfGap);
        fread(result->gap1.data(), 1, sizeOfGap, f);
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

        result->rawPixel.resize(sizeOfRawImage);
        fread(result->rawPixel.data(), 1, sizeOfRawImage, f);
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
            result->gap2.resize(sizeOfGap);
            fread(result->gap2.data(), 1, sizeOfGap, f);
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
                    return ReadRgb32Fast(bmp);
                }
            } else if (bmp->dib.bitsPerPixel == 24) {
                return ReadRgb24(bmp);
            } else if (bmp->dib.bitsPerPixel == 16) {
                return ReadRgb16(bmp);
            } else if (bmp->dib.bitsPerPixel <= 8) {
                return ReadRgbPalette(bmp);
            } else {
                throw std::runtime_error("Not supported bitsPerPixel");
            }
        case BmpCompression::BI_RLE8:
        case BmpCompression::BI_RLE4:
            return ReadRle(bmp);
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
    return sf::Texture();
}

sf::Texture PictureLoader::ReadRgb32Fast(std::shared_ptr<const BMP> bmp) {
    return sf::Texture();
}

sf::Texture PictureLoader::ReadRgb24(std::shared_ptr<const BMP> bmp) {
    return sf::Texture();
}

sf::Texture PictureLoader::ReadRgb16(std::shared_ptr<const BMP> bmp) {
    return sf::Texture();
}

sf::Texture PictureLoader::ReadRgbPalette(std::shared_ptr<const BMP> bmp) {
    sf::Image image;
    sf::Vector2i size = {bmp->dib.width, std::abs(bmp->dib.height)};
    image.create(size.x, size.y);

    auto pixel = PictureLoader::getUncompressedPixel32(bmp);

    for (uint32_t y = 0; y < size.y; ++y) {
        for (uint32_t x = 0; x < size.x; ++x) {
            auto index = pixel[x + y * size.x];

            sf::Color c;

            c = bmp->palette[index];

            if (bmp->dib.height > 0) {
                image.setPixel(x, size.y - y - 1, c);
            } else {
                image.setPixel(x, y, c);
            }

        }
    }

    sf::Texture t0;
    t0.loadFromImage(image);
    return t0;
}

sf::Texture PictureLoader::ReadRle(std::shared_ptr<const BMP> bmp) {
    return sf::Texture();
}

sf::Texture PictureLoader::ReadBitFields(std::shared_ptr<const BMP> bmp) {
    sf::Image image;
    sf::Vector2i size = {bmp->dib.width, std::abs(bmp->dib.height)};
    image.create(size.x, size.y);

    auto pixel = PictureLoader::getUncompressedPixel32(bmp);

    auto RedMask = bmp->dib.RedMask;
    auto GreenMask = bmp->dib.GreenMask;
    auto BlueMask = bmp->dib.BlueMask;
    auto AlphaMask = bmp->dib.AlphaMask;

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
    uint32_t maxValueAlpha = 0xFFFFFFFF >> (32 - bitsAlphaMask);
    double invMaxValueAlpha = 255.0 / maxValueAlpha;

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

            if (bmp->dib.height > 0) {
                image.setPixel(x, size.y - y - 1, c);
            } else {
                image.setPixel(x, y, c);
            }

        }
    }

    sf::Texture t0;
    t0.loadFromImage(image);
    return t0;
}

sf::Texture PictureLoader::ReadRle24(std::shared_ptr<const BMP> bmp) {
    return sf::Texture();
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
                if (bmp->dib.dibSize == sizeof(BITMAP_M_INFOHEADER) && bmp->dib.bitsPerPixel == 16) {
                    //16bit mode in v3 WINDOWS NT is saved in big endian mode
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

