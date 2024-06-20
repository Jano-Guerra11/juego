#pragma once
#include <SFML/Graphics.hpp>
#include "entidad.h"

enum estados_enemigo {
	quietoE,   // quieto seria moviendose
	arribaE,
	abajoE,



};

class Enemigo : public entidad
{
private:
	float _velocidadE;
	estados_enemigo _estadoEnemigo;
	int _vidaE;

public:
	Enemigo(); // constructor
	void cmd();
	void update();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

};

