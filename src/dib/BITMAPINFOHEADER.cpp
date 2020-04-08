//
// Created by Michal_Marszalek on 03.04.2020.
//

#include <include/dib/BITMAPINFOHEADER.h>
#include <include/DEFINES.h>

DIBHEADER BITMAPINFOHEADER::load(FILE *f) {
    DIBHEADER header{};
    BITMAPINFOHEADER device{};

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

    if (header.dibSize == sizeof(BITMAPINFOHEADER)) {
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

