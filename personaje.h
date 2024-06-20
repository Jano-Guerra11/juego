#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "entidad.h"
#include "Colisionable.h"
enum estados_personaje {
	quieto_adelante,
	quieto_atras,
	corre_adelante,
	corre_atras,
	salta,
	salta_atras,
	salta_adelante,
	arriba,
    abajo,
    bajarDePlataforma,

};

class Personaje : public entidad, public Collisionable  {
private:

	/// propio de la clase
	float _velocidad;
	estados_personaje _estado;   // representa el estado en el que se encuentra el personaje
	float _velocidadSalto;
	int _vida;
    sf::Vector2f _posicionAnterior;
public:

	Personaje();
	void cmd();
	void update();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;   // target seria el window y states son estados donde se encuentra actualmente el personaje
	                                                             // override porque estoy sobreescribiendo ¿?
	                                                             // const porque es constante lo que quiere decir que dibuja pero no cambia el estado actual del personaje
	                                                             // una imagen cuando se dibuja no se modifica su esta
	sf::Sprite getSprite();
	void setSprite(sf::Texture _textura);
	estados_personaje getEstado();
	void setEstado(estados_personaje est);
	void setPosicion(float x, float y);
	float getX();
	float getY();
sf::FloatRect getBounds()const;
void addVelocity(float velocity);
sf :: Vector2f getPosicionPP();
float getVelocidadSalto();
void setGravedad(int n);

void mover(float x,float y);    /// encargado de mover al personaje
sf::Vector2f getPosicionAnterior();
sf::Sprite& getDrawPP();
void quietoCorriendo(float x,float y);
void restarVida(int v);
int getVida(){return _vida; }

};


