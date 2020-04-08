//
// Created by Michal_Marszalek on 03.04.2020.
//

#include <include/dib/BITMAP_M_V4HEADER.h>
#include "DEFINES.h"

DIBHEADER BITMAP_M_V4HEADER::load(FILE *f) {
    DIBHEADER header{};
    BITMAP_M_V4HEADER device{};

    header = BITMAP_M_V3INFOHEADER::load(f);

    READ_FILE(CSType);
    READ_FILE(RedX);
    READ_FILE(RedY);
    READ_FILE(RedZ);
    READ_FILE(GreenX);
    READ_FILE(GreenY);
    READ_FILE(GreenZ);
    READ_FILE(BlueX);
    READ_FILE(BlueY);
    READ_FILE(BlueZ);
    READ_FILE(GammaRed);
    READ_FILE(GammaGreen);
    READ_FILE(GammaBlue);

    return header;
}

