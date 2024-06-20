#ifndef COLISIONABLE_H_INCLUDED
#define COLISIONABLE_H_INCLUDED

#pragma once
#include "SFMl/Graphics.hpp"
class Collisionable
{
public:
virtual     sf::FloatRect getBounds() const = 0; ///obligamos a que quien lo herede lo implemente
    bool isCollision(Collisionable &col) const; ///Recibe una referencia a un colisionable

};

#endif // COLISIONABLE_H_INCLUDED
