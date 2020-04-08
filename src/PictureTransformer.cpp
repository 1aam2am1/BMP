//
// Created by Michal_Marszalek on 08.04.2020.
//

#include <extlibs/SFML/include/SFML/Graphics/RenderTexture.hpp>
#include <extlibs/SFML/include/SFML/Graphics/Sprite.hpp>
#include "PictureTransformer.h"

PictureTransformer::PictureTransformer() {
    shader.loadFromFile("resources/black_and_white.frag", sf::Shader::Fragment);
    shader.setUniform("texture", sf::Shader::CurrentTexture);
}


sf::Texture PictureTransformer::toWhiteBlack(const sf::Texture &picture) {
    if (sf::Shader::isAvailable()) {
        sf::RenderTexture t0;
        t0.create(picture.getSize().x, picture.getSize().y);

        sf::Sprite s0(picture);
        t0.draw(s0, &shader);
        t0.display();

        return t0.getTexture();
    } else {
        sf::Image image;
        image = picture.copyToImage();

        auto size = image.getSize();

        for (uint32_t i = 0; i < size.y; ++i) {
            for (uint32_t j = 0; j < size.x; ++j) {
                auto color = image.getPixel(j, i);
                if (color.r != color.g || color.g != color.b) {
                    color.r = color.g = color.b = color.r * 0.299
                                                  + color.g * 0.587
                                                  + color.b * 0.114;

                    image.setPixel(j, i, color);
                }
            }
        }
        sf::Texture t0;
        t0.loadFromImage(image);
        return t0;
    }
}