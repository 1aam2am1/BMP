//
// Created by Michal_Marszalek on 02.04.2020.
//

#ifndef BMP_BITMAP_M_V5HEADER_H
#define BMP_BITMAP_M_V5HEADER_H

#include "dib/BITMAP_M_V4HEADER.h"

#pragma pack(push, 1)

struct BITMAP_M_V5HEADER : BITMAP_M_V4HEADER {
    uint32_t Intent;
    uint32_t ProfileData;
    uint32_t ProfileSize;
    uint32_t Reserved;

    static DIBHEADER load(FILE *);
};

#pragma pack(pop)

static_assert(offsetof(BITMAP_M_V5HEADER, Intent) == sizeof(BITMAP_M_V4HEADER), "Wrong alignment of data");
static_assert(sizeof(BITMAP_M_V5HEADER) == 124, "Wrong alignment of data");

#endif //BMP_BITMAP_M_V5HEADER_H
