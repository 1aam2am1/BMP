//
// Created by Michal_Marszalek on 03.04.2020.
//

#include <include/dib/BITMAPV3INFOHEADER.h>
#include "DEFINES.h"

DIBHEADER BITMAPV3INFOHEADER::load(FILE *f) {
    DIBHEADER header{};
    BITMAPV3INFOHEADER device{};

    header = BITMAPV2INFOHEADER::load(f);

    READ_FILE(AlphaMask);

    return header;
}

