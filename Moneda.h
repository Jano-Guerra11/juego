#ifndef MONEDA_H_INCLUDED
#define MONEDA_H_INCLUDED

#include <SFML/Graphics.hpp>
#include "entidad.h"
#include "Colisionable.h"

class Moneda:public entidad, public Collisionable{
private:
    sf::Sprite _spriteBronce;
    sf::Texture _texturaBronce;
    sf::Sprite _spritePlata;
    sf::Texture _texturaPlata;
    sf::Sprite _spriteOro;
    sf::Texture _texturaOro;
public:
    Moneda();
    void update();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
    void respawn(); ///Respawnea aleatoriamente luego de agarrar la moneda
    sf::FloatRect getBounds() const ; ///Obtiene la caja de colisiones
    sf::FloatRect getBoundsPlata() const ;
    sf::FloatRect getBoundsOro() const ;
};

#endif // MONEDA_H_INCLUDED
