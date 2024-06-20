#ifndef CACTUS_H_INCLUDED
#define CACTUS_H_INCLUDED
#include "Colisionable.h"
#include "entidad.h"

enum estados_cactus{
quietoC,
arribaC,


};


class Cactus  : public entidad, public Collisionable  {

protected:
sf::Texture _textura;
sf::Sprite _sprite;

float _velocidadO;
estados_cactus _estadoCactus;

public:

    Cactus();
    void cmd( );
void update();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

sf::FloatRect getBounds()const;


void setEstado(estados_cactus est);
sf::Sprite& getDraw();
void setPosicion(float x,float y);

};


#endif // CACTUS_H_INCLUDED
