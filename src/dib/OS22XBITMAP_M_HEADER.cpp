//
// Created by Michal_Marszalek on 03.04.2020.
//

#include <include/dib/OS22XBITMAP_M_HEADER.h>
#include <include/DEFINES.h>

DIBHEADER OS22XBITMAP_M_HEADER::load(FILE *f) {
    DIBHEADER header{};
    OS22XBITMAP_M_HEADER device{};

    READ_FILE(dibSize);     //4
    READ_FILE(width);       //8
    READ_FILE(height);      //12
    READ_FILE(planesNumber);//14
    READ_FILE(bitsPerPixel);//16
    if (header.dibSize == 16) {
        return header;
    }   ///64

    READ_FILE(compressionType);

    // The compression value in OS/2 bitmap has a different meaning than in windows bitmaps.
    // Map the OS/2 value to the windows values.
    switch (static_cast<uint32_t>(header.compressionType)) {
        case 4:
            header.compressionType = BmpCompression::RLE_24;
            break;
        case 3:
            header.compressionType = BmpCompression::Huffman;
            break;
        default:
            break;
    }

    READ_FILE(rawImageSize);
    READ_FILE(XPixelsPerM);
    READ_FILE(YPixelsPerM);
    READ_FILE(paletteColorsNumber);
    READ_FILE(importantColors);

    READ_FILE(units);
    READ_FILE(padding);
    READ_FILE(recordingOrder);
    READ_FILE(renderingAlgorithm); ///halftoning
    READ_FILE(halftoning1);
    READ_FILE(halftoning2);
    READ_FILE(colorEncoding);
    READ_FILE(applicationIdentifier);

    return header;
}

