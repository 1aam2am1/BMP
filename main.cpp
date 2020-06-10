#include "PictureLoader.h"
#include <iostream>
#include <iomanip>
#include <map>
#include <extlibs/SFML/include/SFML/Graphics.hpp>
#include <include/PictureTransformer.h>
#include <CkPrivateKey.h>
#include <CkXml.h>
#include <CkBinData.h>
#include <CkCert.h>
#include <CkPublicKey.h>
#include <include/Encryption.h>


#define MY_BIG_ENDIAN 0
#define MY_LITTLE_ENDIAN 1

int TestByteOrder() {
    short int word = 0x0001;
    char *b = (char *) &word;
    return (b[0] ? MY_LITTLE_ENDIAN : MY_BIG_ENDIAN);
}


int main() {
    {
        int r = TestByteOrder();
        printf("%s\n", r == MY_LITTLE_ENDIAN ? "Little Endian" : "Big Endian");
        if (r == MY_BIG_ENDIAN) {
            std::cout << "Wrong system\n";
            std::terminate();
        }
    }
    {
        if (!sf::Shader::isAvailable()) {
            std::cout << "Shaders are not available. Fourier transform can work bad and slow." << std::endl;
        }
    }

    std::shared_ptr<BMP> bmp;

    {
        bool success = Encryption::key.LoadPem("ssh/id_rsa");
        if (!success) {
            std::cout << Encryption::key.lastErrorText() << "\r\n";
            std::terminate();
        }

        std::cout << "Private Key XML:" << "\n";
        std::cout << Encryption::key.getXml() << "\n";
        std::cout << "Length: " << Encryption::key.get_BitLength() << "\n";
    }

    std::cout << "Rsa: {0-none, 1-decryption, 2-cbc(dec)" << std::endl;
    int encryptionChoice;
    {
        std::cin >> encryptionChoice;
        switch (encryptionChoice) {
            case 0:
            case 1:
            case 2:
                break;
            default:
                std::terminate();
        }
    }

    try {
        std::cin.ignore();
        std::cout << "File name: " << std::endl;
        std::string name;
        getline(std::cin, name);

        switch (encryptionChoice) {
            case 0:
                bmp = PictureLoader::load(name, 0);
                break;
            case 1:
                bmp = PictureLoader::load(name, 1);
                break;
            case 2:
                bmp = PictureLoader::load(name, 2);
                break;
            default:
                break;
        };
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
    if (bmp->array_header.signature[0]) {
        std::cout << bmp->array_header;
    }
    std::cout << bmp->header;

    /*
     * Display data on bitmap info
     */
    std::cout << bmp->dib;

    /*
     * Display palette
     */
    std::cout << bmp->palette;

    try {
        bmp->picture = PictureLoader::createPicture(bmp);
    } catch (const std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
        std::terminate();
    } catch (...) {
        std::cout << "Exception with no data" << std::endl;
        std::terminate();
    }

    try {
        PictureLoader::savePicture(bmp->picture, "out.bmp", 0);
        PictureLoader::savePicture(bmp->picture, "en_out.bmp", 1);
        //PictureLoader::savePicture(bmp->picture, "encbc_out.bmp", 2);
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

    try {
        PictureTransformer transformer;

        auto l = transformer.fourier(bmp->picture_white_black);
        bmp->laplace = l.first;
        bmp->phase = l.second;
    } catch (const std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
        std::terminate();
    } catch (...) {
        std::cout << "Exception with no data" << std::endl;
        std::terminate();
    }


    sf::RenderWindow window;
    int scale = 1;

    window.create(
            {scale * bmp->picture.getSize().x, scale * bmp->picture.getSize().y},
            "BMP Picture",
            sf::Style::Titlebar | sf::Style::Close);

    window.setFramerateLimit(60);

    sf::Sprite sp(bmp->picture);
    sp.setScale(scale, scale);
    const sf::Texture *texture_table[] = {&bmp->picture, &bmp->picture_white_black, &bmp->laplace, &bmp->phase};
    uint32_t texture_i = 0;
    while (window.isOpen()) {
        sf::Event event{};
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
                texture_i += 1;
                texture_i %= 4;
                sp.setTexture(*texture_table[texture_i], true);
            }
        }
        window.clear(sf::Color::Black);

        //sp.setPosition(sf::Vector2f{sf::Mouse::getPosition(window)});
        window.draw(sp);

        window.display();
    }

    return 0;
}
