//
// Created by Michal_Marszalek on 03.04.2020.
//

#include <include/dib/BITMAP_M_INFOHEADER.h>
#include <include/DEFINES.h>

DIBHEADER BITMAP_M_INFOHEADER::load(FILE *f) {
    DIBHEADER header{};
    BITMAP_M_INFOHEADER device{};

    READ_FILE(dibSize);
    READ_FILE(width);
    READ_FILE(height);
    READ_FILE(planesNumber);
    READ_FILE(bitsPerPixel);
    READ_FILE(compressionType);
    READ_FILE(rawImageSize);
    READ_FILE(XPixelsPerM);
    READ_FILE(YPixelsPerM);
    READ_FILE(paletteColorsNumber);
    READ_FILE(importantColors);

    if (header.dibSize == sizeof(BITMAP_M_INFOHEADER)) {
        switch (header.compressionType) {
            case BmpCompression::BI_BITFIELDS:
                READ_FILE_SIZE(RedMask, 4);
                READ_FILE_SIZE(GreenMask, 4);
                READ_FILE_SIZE(BlueMask, 4);
                break;
            case BmpCompression::BI_ALPHABITFIELDS:
                READ_FILE_SIZE(RedMask, 4);
                READ_FILE_SIZE(GreenMask, 4);
                READ_FILE_SIZE(BlueMask, 4);
                READ_FILE_SIZE(AlphaMask, 4);
                break;
            default:
                break;
        }
    }

    return header;
}

void BITMAP_M_INFOHEADER::save(FILE *f, const DIBHEADER &header) {
    BITMAP_M_INFOHEADER device{};

    WRITE_FILE(dibSize);
    WRITE_FILE(width);
    WRITE_FILE(height);
    WRITE_FILE(planesNumber);
    WRITE_FILE(bitsPerPixel);
    WRITE_FILE(compressionType);
    WRITE_FILE(rawImageSize);
    WRITE_FILE(XPixelsPerM);
    WRITE_FILE(YPixelsPerM);
    WRITE_FILE(paletteColorsNumber);
    WRITE_FILE(importantColors);

    switch (header.compressionType) {
        case BmpCompression::BI_BITFIELDS:
            WRITE_FILE_SIZE(RedMask, 4);
            WRITE_FILE_SIZE(GreenMask, 4);
            WRITE_FILE_SIZE(BlueMask, 4);
            break;
        case BmpCompression::BI_ALPHABITFIELDS:
            WRITE_FILE_SIZE(RedMask, 4);
            WRITE_FILE_SIZE(GreenMask, 4);
            WRITE_FILE_SIZE(BlueMask, 4);
            WRITE_FILE_SIZE(AlphaMask, 4);
            break;
        default:
            break;
    }
}

