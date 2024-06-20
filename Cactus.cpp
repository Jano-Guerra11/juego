#include "cactus.h"

#include <iostream>

Cactus::Cactus(){
_textura.loadFromFile("cactus1.png");

	_sprite.setTexture(_textura);

	_velocidadO=5;
_estadoCactus=quietoC;
	//_sprite.setOrigin(_sprite.getGlobalBounds().width / 2, 0);
	_sprite.setPosition(1200,540);
}


void Cactus::cmd( ){

}
void Cactus::update(){


	switch (_estadoCactus) {

	case quietoC:
		// cosas que hace el personaje cuando esta quieto

		break;
    case arribaC:
        _sprite.move(0, -2);
        break;
	}


}

void Cactus::setEstado(estados_cactus est){
_estadoCactus=est;

}

void Cactus::draw(sf::RenderTarget& target, sf::RenderStates states)const{

     target.draw(_sprite, states);
}
sf::Sprite& Cactus ::getDraw(){
  return _sprite;
}

sf::FloatRect Cactus:: getBounds()const{
return _sprite.getGlobalBounds();

}


void Cactus::setPosicion(float x,float y){
_sprite.setPosition(x,y);
}
