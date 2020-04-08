//
// Created by Michal_Marszalek on 06.04.2020.
//

#ifndef BMP_COLOR_H
#define BMP_COLOR_H

#include <cstdint>
#include <SFML/Graphics/Color.hpp>

#pragma pack(push, 1)

struct Color {
    uint8_t blue;
    uint8_t green;
    uint8_t red;

    uint8_t alpha = 255;

    operator sf::Color() const {
        sf::Color r;
        r.r = this->red;
        r.g = this->green;
        r.b = this->blue;
        r.a = this->alpha;
        return r;
    }
};

#pragma pack(pop)

static_assert(sizeof(Color) == 4, "Wrong alignment of data");

#endif //BMP_COLOR_H
