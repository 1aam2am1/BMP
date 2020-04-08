//
// Created by Michal_Marszalek on 03.04.2020.
//

#include <include/dib/BITMAPV4HEADER.h>
#include "DEFINES.h"

DIBHEADER BITMAPV4HEADER::load(FILE *f) {
    DIBHEADER header{};
    BITMAPV4HEADER device{};

    header = BITMAPV3INFOHEADER::load(f);

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

