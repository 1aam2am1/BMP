//
// Created by Michal_Marszalek on 03.04.2020.
//

#include <include/dib/BITMAP_M_V3INFOHEADER.h>
#include "DEFINES.h"

DIBHEADER BITMAP_M_V3INFOHEADER::load(FILE *f) {
    DIBHEADER header{};
    BITMAP_M_V3INFOHEADER device{};

    header = BITMAP_M_V2INFOHEADER::load(f);

    READ_FILE(AlphaMask);

    return header;
}

