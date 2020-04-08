//
// Created by Michal_Marszalek on 02.04.2020.
//

#include <include/DEFINES.h>
#include "BMP_HEADER.h"

BMP_HEADER BMP_HEADER::load(FILE *f) {
    BMP_HEADER header{};
    BMP_HEADER device{};

    READ_FILE(signature[0]);
    READ_FILE(signature[1]);
    READ_FILE(file_size);
    READ_FILE(reserved1);
    READ_FILE(reserved2);
    READ_FILE(file_offset);

    return header;
}

std::ostream &operator<<(std::ostream &l, const BMP_HEADER &header) {
    l << header.signature[0] << header.signature[1] << std::endl;
    l << "file_size: " << header.file_size << std::endl;
    l << "reserved1: " << header.reserved1 << std::endl;
    l << "reserved2: " << header.reserved2 << std::endl;
    l << "file_offset: " << header.file_offset << std::endl;

    return l;
}