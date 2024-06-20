#ifndef PLATAFORMAS_H_INCLUDED
#define PLATAFORMAS_H_INCLUDED


#include <SFML/Graphics.hpp>
#include <iostream>
#include "entidad.h"
#include "Colisionable.h"
/// plataforma mediana
class Plataformas : entidad , public Collisionable
{
    protected:
        sf::Texture _texturaPlataformaMediana;
        sf::Sprite _plataformaMediana;
    public:
        Plataformas();
         ~Plataformas();

sf::FloatRect getBounds()const;

void update();
	 void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

sf::Sprite& getDrawMediana();


void setPosicionMediana(float x,float y);


float getXMedia();
float getyMedia();

};


#endif // PLATAFORMAS_H_INCLUDED
