#pragma once
#include <SFML/Graphics.hpp>
#include "personaje.h"
class Mapa : public  sf::Drawable
{
protected:
	sf::Texture _texturaMapa, _texturaMapaFondo, _texturaMapaFondo2;
	sf::Sprite _spriteMapa, _spriteFondo1,_spriteFondo2, _spriteFondo3,_spriteFondo4,_spriteFondo5;
	int _tileAlto;
	int _tileAncho;
	int _tilesTotalesX;
	int _tilesTotalesY;

public:
	Mapa();

	void inicializacion();
	void load();
	void update();
	void draw(sf::RenderTarget& target, sf::RenderStates states ) const override;

};

