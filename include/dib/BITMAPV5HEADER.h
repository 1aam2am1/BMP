//
// Created by Michal_Marszalek on 02.04.2020.
//

#ifndef BMP_BITMAPV5HEADER_H
#define BMP_BITMAPV5HEADER_H

#include "dib/BITMAPV4HEADER.h"

#pragma pack(push, 1)

struct BITMAPV5HEADER : BITMAPV4HEADER {
    uint32_t Intent;
    uint32_t ProfileData;
    uint32_t ProfileSize;
    uint32_t Reserved;

    static DIBHEADER load(FILE *);
};

#pragma pack(pop)

static_assert(offsetof(BITMAPV5HEADER, Intent) == sizeof(BITMAPV4HEADER), "Wrong alignment of data");
static_assert(sizeof(BITMAPV5HEADER) == 124, "Wrong alignment of data");

#endif //BMP_BITMAPV5HEADER_H
