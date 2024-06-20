#ifndef POWERUP_H_INCLUDED
#define POWERUP_H_INCLUDED

#pragma once
#include "SFML/Graphics.hpp"
#include "Colisionable.h"
#include "entidad.h"
class PowerUp : public entidad , public Collisionable
{
private:
    sf::Sprite _sprite;
    sf::Texture _textura;
public:
    PowerUp();
    void update();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
    sf::FloatRect getBounds() const override;
    void respawn(); ///respawnea aleatoriamente el powerUp
};

#endif // POWERUP_H_INCLUDED
