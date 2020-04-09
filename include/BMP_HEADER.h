//
// Created by Michal_Marszalek on 02.04.2020.
//

#ifndef BMP_BMP_HEADER_H
#define BMP_BMP_HEADER_H

#include <cstdint>
#include <cstdio>
#include <ostream>

#pragma pack(push, 1)

struct BMP_HEADER {
    uint8_t signature[2];
    uint32_t file_size;
    uint16_t reserved1;
    uint16_t reserved2;
    uint32_t file_offset;

    static BMP_HEADER load(FILE *);
};

///_Os2BmpArrayHeader
struct BMP_ARRAY_HEADER {
    uint8_t signature[2];
    uint32_t file_size;
    uint32_t offset_to_next;
    uint16_t screen_width;
    uint16_t screen_height;
};

#pragma pack(pop)

static_assert(sizeof(BMP_HEADER) == 14, "Wrong pragma");
static_assert(sizeof(BMP_ARRAY_HEADER) == 14, "Wrong pragma");

std::ostream &operator<<(std::ostream &, const BMP_HEADER &);

std::ostream &operator<<(std::ostream &, const BMP_ARRAY_HEADER &);

#endif //BMP_BMP_HEADER_H
