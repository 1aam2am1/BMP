//
// Created by Michal_Marszalek on 03.04.2020.
//

#include <include/dib/BITMAPV5HEADER.h>
#include "DEFINES.h"

DIBHEADER BITMAPV5HEADER::load(FILE *f) {
    DIBHEADER header{};
    BITMAPV5HEADER device{};

    header = BITMAPV4HEADER::load(f);

    READ_FILE(Intent);
    READ_FILE(ProfileData);
    READ_FILE(ProfileSize);
    READ_FILE(Reserved);

    return header;
}

