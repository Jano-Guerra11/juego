#pragma once
#include <SFML/Graphics.hpp>
#include "Colisionable.h"

class entidad : public sf::Drawable  // esta herencia hace que el personaje o la clase sea dibujable, nos brinda un metodo en el que
{                                             // especificamos de que forma queremos que se dibuje el objeto, el metodo es draw
protected:

	sf::Sprite _sprite;               // sprite es el conjunto de imagenes que representa al personaje o ojeto de forma grafica
	sf:: Texture _textura;           // textura es una imagen que se usa para representar al objeto

public:

	virtual void update();
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

};


