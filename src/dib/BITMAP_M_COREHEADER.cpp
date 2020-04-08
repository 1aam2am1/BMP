//
// Created by Michal_Marszalek on 03.04.2020.
//

#include <include/dib/BITMAP_M_COREHEADER.h>
#include <include/DEFINES.h>

DIBHEADER BITMAP_M_COREHEADER::load(FILE *f) {
    DIBHEADER header{};
    BITMAP_M_COREHEADER device{};

    READ_FILE(dibSize);
    READ_FILE(width);
    READ_FILE(height);
    READ_FILE(planesNumber);
    READ_FILE(bitsPerPixel);

    return header;
}

