//
// Created by Michal_Marszalek on 03.04.2020.
//

#include <include/dib/BITMAP_M_V2INFOHEADER.h>
#include "DEFINES.h"

DIBHEADER BITMAP_M_V2INFOHEADER::load(FILE *f) {
    DIBHEADER header{};
    BITMAP_M_V2INFOHEADER device{};

    header = BITMAP_M_INFOHEADER::load(f);

    READ_FILE(RedMask);
    READ_FILE(GreenMask);
    READ_FILE(BlueMask);

    return header;
}

