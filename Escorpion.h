#ifndef ESCORPION_H_INCLUDED
#define ESCORPION_H_INCLUDED

#include "Colisionable.h"
#include "entidad.h"

class Escorpion : public entidad, public Collisionable{
protected:
    sf::Texture _textura;
sf::Sprite _sprite;

public:
     Escorpion();
    void cmd( );
void update();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

sf::FloatRect getBounds()const;
sf::Sprite& getDraw();
void setPosicion(float x,float y);

};

#endif // ESCORPION_H_INCLUDED
