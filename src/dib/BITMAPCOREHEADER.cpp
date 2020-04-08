//
// Created by Michal_Marszalek on 03.04.2020.
//

#include <include/dib/BITMAPCOREHEADER.h>
#include <include/DEFINES.h>

DIBHEADER BITMAPCOREHEADER::load(FILE *f) {
    DIBHEADER header{};
    BITMAPCOREHEADER device{};

    READ_FILE(dibSize);
    READ_FILE(width);
    READ_FILE(height);
    READ_FILE(planesNumber);
    READ_FILE(bitsPerPixel);

    return header;
}

