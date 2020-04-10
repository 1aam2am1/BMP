//
// Created by Michal_Marszalek on 08.04.2020.
//

#ifndef BMP_PICTURETRANSFORMER_H
#define BMP_PICTURETRANSFORMER_H


#include <extlibs/SFML/include/SFML/Graphics/Texture.hpp>
#include <extlibs/SFML/include/SFML/Graphics/Shader.hpp>

class PictureTransformer {
public:
    PictureTransformer();

    sf::Texture toWhiteBlack(const sf::Texture &);

    /* Only red chanel
     *
     */
    sf::Texture fourier(const sf::Texture &);

private:
    sf::Shader shader;


};


#endif //BMP_PICTURETRANSFORMER_H
