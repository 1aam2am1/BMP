//
// Created by Michal_Marszalek on 08.04.2020.
//

#define _USE_MATH_DEFINES

#include <extlibs/SFML/include/SFML/Graphics/RenderTexture.hpp>
#include <extlibs/SFML/include/SFML/Graphics/Sprite.hpp>
#include <complex>
#include <cmath>
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

void FastFourier1D(std::vector<std::complex<double>> &input, bool inverse) {
    std::vector<std::complex<double>> result;
    result.resize(input.size());
    for (uint32_t x = 0; x < input.size(); ++x) {
        std::complex<double> suma;
        for (uint32_t sx = 0; sx < input.size(); ++sx) {
            using namespace std::complex_literals;
            double dx = x;
            double dsx = sx;
            double sizex = input.size();

            if (inverse) {
                suma += input[sx] * std::exp(1i * 2.0 * M_PI * dx * dsx / sizex);
            } else {
                suma += input[sx] * std::exp(-1i * 2.0 * M_PI * dx * dsx / sizex);
            }
        }
        result[x] = suma;
    }
    input = result;
}

std::vector<std::vector<std::complex<double>>>
rotateVector(std::vector<std::vector<std::complex<double>>> &input) {
    std::vector<std::vector<std::complex<double>>> result;

    result.resize(input[0].size());
    for (uint32_t y = 0; y < input[0].size(); ++y) {
        result[y].resize(input.size());
    }

    for (uint32_t x = 0; x < input.size(); ++x) {
        for (uint32_t y = 0; y < input[x].size(); ++y) {
            result[y][x] = input[x][y];
        }
    }

    return result;
}

sf::Texture PictureTransformer::fourier(const sf::Texture &picture) {
    sf::Image image;
    image = picture.copyToImage();

    //to complex
    std::vector<std::vector<std::complex<double>>> complex_image;
    complex_image.resize(image.getSize().y);

    for (uint32_t y = 0; y < image.getSize().y; ++y) {
        complex_image[y].resize(image.getSize().x);

        for (uint32_t x = 0; x < image.getSize().x; ++x) {
            complex_image[y][x] = image.getPixel(x, y).r;
        }
    }

    //cout << "Transform to complex" << endl;
    int size = image.getSize().x;

    for (int i = 0; i < size; i++)
        FastFourier1D(complex_image[i], false);

    complex_image = rotateVector(complex_image);

    for (int i = 0; i < size; i++)
        FastFourier1D(complex_image[i], false);

    complex_image = rotateVector(complex_image);

    //from complex
    for (uint32_t y = 0; y < image.getSize().y; ++y) {
        for (uint32_t x = 0; x < image.getSize().x; ++x) {
            int c = std::round(std::abs(complex_image[y][x]));

            //uint8_t c = image.setPixel(x, y, {, c, c, 255});
            image.setPixel(x, y, sf::Color{c, c, c, 255});
        }
    }

    sf::Texture t0;
    t0.loadFromImage(image);

    return t0;
}