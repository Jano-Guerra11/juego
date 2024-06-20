#ifndef OBSTACULOS_H_INCLUDED
#define OBSTACULOS_H_INCLUDED
#include <iostream>
#include "entidad.h"
#include "Plataformas.h"
#include "PlataformaChica.h"
#include "PlataformaGrande.h"
#include "PlataformaGrande2.h"
#include "PlataformaMediana2.h"
#include "PlataformaMediana3.h"
#include "personaje.h"
#include "Colisionable.h"
#include "Cactus.h"
enum estados_obstaculos {
	quietoO,
	arribaO,
	abajoO,
	izquierdaO,
	derechaO,

};

class Obstaculos : public entidad, public Collisionable  {

protected:
sf::Texture _texturaMovil;
sf::Sprite _spriteMovil;

Cactus cactus , cactus2;

float _velocidadO;
	estados_obstaculos _estadoObstaculos;

public:

    Obstaculos();
    void cmd(Plataformas *mediana1 );  /// RECIBE OBJEWTO PLATAFORMAS PARA SABER DONDE ES SU UBICACION Y ASI UBICAR CADA OBSTACULO EN REFERENCIA A UNA PLATAFORMA
void update();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

sf::FloatRect getBounds()const;
void setEstado(estados_obstaculos est){
_estadoObstaculos=est;
}
sf::Sprite getDraw();
void setPosicion(float x,float y);

};



#endif // OBSTACULOS_H_INCLUDED
