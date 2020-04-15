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
     *  amplitude, phase
     */
    std::pair<sf::Texture, sf::Texture> fourier(const sf::Texture &);

private:
    sf::Shader black_and_white_shader;

    std::pair<sf::Texture, sf::Texture> shader_fourier(const sf::Texture &);

    sf::Shader to_complex_shader;
    sf::Shader f1D_shader;
    sf::Shader to_watch_shader;
    sf::Shader to_log_amplitude_shader;
    sf::Shader to_phase_shader;

    float max_value(const sf::Texture &);

    sf::Shader max_shader;
};


#endif //BMP_PICTURETRANSFORMER_H
