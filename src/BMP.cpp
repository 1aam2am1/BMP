//
// Created by Michal_Marszalek on 02.04.2020.
//

#include "BMP.h"

std::ostream &operator<<(std::ostream &l, const BMP::PALETTE &palette) {

    l << "Size of palette: " << palette.size() << " [RGBA]" << std::endl;
    for (uint32_t i = 0; i < palette.size(); ++i) {
        l << static_cast<char>(0x9) << "[" << i << "] " << palette[i] << std::endl;
    }

    return l;
}
