#pragma once
#include "entidad.h"
#include "personaje.h"
#include "Plataformas.h"
#include <iostream>
enum estado_disparos {
	nace,
	enMovimientoAdelante,
	enMovimientoAtras,
	noExiste,
	muere,

};

class Disparos : public entidad
{
protected:
	int _danio;
	int _velocidadDisparo;
	estado_disparos _estadoDisparos;

public:
	 Disparos();
	 ~Disparos();
	void cmd();
	void update(float x, float y, int _estadoPj,Personaje obj );
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

};


