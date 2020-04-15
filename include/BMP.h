//
// Created by Michal_Marszalek on 02.04.2020.
//

#ifndef BMP_BMP_H
#define BMP_BMP_H

#include <cstdint>
#include <include/dib/DIBHEADER.h>
#include <vector>
#include <extlibs/SFML/include/SFML/Graphics/Texture.hpp>
#include "include/dib/BITMAP_M_COREHEADER.h"
#include "include/dib/BITMAP_M_INFOHEADER.h"
#include "include/dib/BITMAP_M_V2INFOHEADER.h"
#include "include/dib/BITMAP_M_V3INFOHEADER.h"
#include "include/dib/BITMAP_M_V4HEADER.h"
#include "include/dib/BITMAP_M_V5HEADER.h"
#include "include/dib/OS22XBITMAP_M_HEADER.h"
#include "BMP_HEADER.h"
#include "Color.h"


struct BMP {
    typedef std::vector<Color> PALETTE;
    typedef std::vector<uint8_t> RAW_PIXEL;
    typedef std::vector<uint8_t> GAP;

    BMP_ARRAY_HEADER array_header; //optional only os22!!!
    BMP_HEADER header;
    DIBHEADER dib;
    PALETTE palette;
    GAP gap1;
    RAW_PIXEL rawPixel;
    GAP gap2;
    //ICC icc;
    ///end of file
    GAP gap3;
    ///real end of file;

    ///Additional data that should be 0
    mutable GAP additional_data;


    /**Beginning of data unpacked data*/
    sf::Texture picture;
    sf::Texture picture_white_black;
    sf::Texture laplace;
};

std::ostream &operator<<(std::ostream &, const BMP::PALETTE &);

#endif //BMP_BMP_H
