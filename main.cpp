#include "PictureLoader.h"
#include <iostream>
#include <iomanip>
#include <map>
#include <extlibs/SFML/include/SFML/Graphics.hpp>
#include <include/PictureTransformer.h>

#define BIG_ENDIAN 0
#define LITTLE_ENDIAN 1

int TestByteOrder() {
    short int word = 0x0001;
    char *b = (char *) &word;
    return (b[0] ? LITTLE_ENDIAN : BIG_ENDIAN);
}


int main() {
    {
        int r = TestByteOrder();
        printf("%s\n", r == LITTLE_ENDIAN ? "Little Endian" : "Big Endian");
        if (r == BIG_ENDIAN) {
            std::cout << "Wrong system\n";
            std::terminate();
        }
    }

    std::shared_ptr<BMP> bmp;

    try {
        bmp = PictureLoader::load("b.bmp");
    } catch (const std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
        std::terminate();
    } catch (...) {
        std::cout << "Exception with no data" << std::endl;
        std::terminate();
    }

    /*
     * Display header data
     */
    std::cout << bmp->header;

    /*
     * Display data on bitmap info
     */
    std::cout << bmp->dib;

    try {
        bmp->picture = PictureLoader::createPicture(bmp);
        bmp->picture.loadFromFile("b2.bmp");
    } catch (const std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
        std::terminate();
    } catch (...) {
        std::cout << "Exception with no data" << std::endl;
        std::terminate();
    }


    try {
        PictureTransformer transformer;

        bmp->picture_white_black = transformer.toWhiteBlack(bmp->picture);
    } catch (const std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
        std::terminate();
    } catch (...) {
        std::cout << "Exception with no data" << std::endl;
        std::terminate();
    }


    sf::RenderWindow window;

    window.create(
            {static_cast<unsigned int>(std::abs(bmp->dib.width)), static_cast<unsigned int>(std::abs(bmp->dib.height))},
            "BMP Picture",
            sf::Style::Titlebar | sf::Style::Close);

    sf::Sprite sp(bmp->picture);
    const sf::Texture *texture_table[] = {&bmp->picture, &bmp->picture_white_black, &bmp->laplace};
    uint32_t texture_i = 0;
    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
                texture_i += 1;
                texture_i %= 3;
                sp.setTexture(*texture_table[texture_i]);
            }
        }
        window.clear(sf::Color::Black);

        window.draw(sp);

        window.display();
    }

    return 0;
}
