//
// Created by Michal_Marszalek on 03.04.2020.
//

#include <include/dib/BITMAPV2INFOHEADER.h>
#include "DEFINES.h"

DIBHEADER BITMAPV2INFOHEADER::load(FILE *f) {
    DIBHEADER header{};
    BITMAPV2INFOHEADER device{};

    header = BITMAPINFOHEADER::load(f);

    READ_FILE(RedMask);
    READ_FILE(GreenMask);
    READ_FILE(BlueMask);

    return header;
}

