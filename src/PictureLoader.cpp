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
            result->dib = BITMAPCOREHEADER::load(f);
            break;
        case 64:
        case 16:
            result->dib = OS22XBITMAPHEADER::load(f);
            break;
        case 40:
            result->dib = BITMAPINFOHEADER::load(f);
            break;
        case 52:
            result->dib = BITMAPV2INFOHEADER::load(f);
            break;
        case 56:
            result->dib = BITMAPV3INFOHEADER::load(f);
            break;
        case 108:
            result->dib = BITMAPV4HEADER::load(f);
            break;
        case 124:
            result->dib = BITMAPV5HEADER::load(f);
            break;
        default:
            throw std::runtime_error("Wrong DIB header size");
    }

    /**Bit mask optional when BITMAPINFOHEADER and compressionType => BI_BITFIELDS || BI_ALPHABITFIELDS*/
    /**Loaded in BITMAPINFOHEADER::load*/

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

sf::Texture PictureLoader::createPicture(std::shared_ptr<const BMP>) {
    return sf::Texture();
}
