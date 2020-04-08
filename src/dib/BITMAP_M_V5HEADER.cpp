//
// Created by Michal_Marszalek on 03.04.2020.
//

#include <include/dib/BITMAP_M_V5HEADER.h>
#include "DEFINES.h"

DIBHEADER BITMAP_M_V5HEADER::load(FILE *f) {
    DIBHEADER header{};
    BITMAP_M_V5HEADER device{};

    header = BITMAP_M_V4HEADER::load(f);

    READ_FILE(Intent);
    READ_FILE(ProfileData);
    READ_FILE(ProfileSize);
    READ_FILE(Reserved);

    return header;
}

