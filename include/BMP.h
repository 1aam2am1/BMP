//
// Created by Michal_Marszalek on 02.04.2020.
//

#ifndef BMP_BMP_H
#define BMP_BMP_H

#include <cstdint>
#include <include/dib/DIBHEADER.h>
#include <vector>
#include <extlibs/SFML/include/SFML/Graphics/Texture.hpp>
#include "include/dib/BITMAPCOREHEADER.h"
#include "include/dib/BITMAPINFOHEADER.h"
#include "include/dib/BITMAPV2INFOHEADER.h"
#include "include/dib/BITMAPV3INFOHEADER.h"
#include "include/dib/BITMAPV4HEADER.h"
#include "include/dib/BITMAPV5HEADER.h"
#include "include/dib/OS22XBITMAPHEADER.h"
#include "BMP_HEADER.h"
#include "Color.h"


struct BMP {
    typedef std::vector<Color> PALETTE;
    typedef std::vector<uint8_t> RAW_PIXEL;
    typedef std::vector<uint8_t> GAP;

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


    /**Beginning of data unpacked data*/
    sf::Texture picture;
    sf::Texture picture_white_black;
    sf::Texture laplace;
};

#endif //BMP_BMP_H
