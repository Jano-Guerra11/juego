#pragma once
#include "personaje.h"
#include "Enemigo.h"
#include "Disparos.h"
#include "Mapa.h"
#include "Plataformas.h"
#include "Obstaculos.h"
#include "PowerUp.h"
#include "Moneda.h"
#include "Colisionable.h"
#include "PlataformaChica.h"
#include "PlataformaGrande.h"
#include "PlataformaGrande2.h"
#include "PlataformaMediana2.h"
#include "PlataformaMediana3.h"
#include "Escorpion.h"
class gamePlay
{
protected:
	Personaje pp;
	Enemigo em;
	Disparos dp;
	Mapa Map;

	Plataformas mediana[15];
	PlataformaMediana2 mediana2[15];
	PlataformaMediana3 mediana3[10];
	PlataformaChica chica[20],chica2;
	PlataformaGrande grande[10];
	PlataformaGrande2 grande2[10];

	Obstaculos fantasma,fantasma2,fantasma3;
	Cactus cactus,cactus2,cactus3,cactus4;
	Escorpion escorpion,escorpion2,escorpion3;

	sf::View view1;
	int escalaX;
	int timer;

	int monedas = 0;
    sf::Font fuente;
    sf::Text texto,textoVida;
    sf::Text texto2;
    PowerUp power;
    Moneda coin;

public:
    gamePlay();
	void cmd();
	void update();
	void draw(sf::RenderWindow& window); /// recibe una referencia a window
	void checkColission();
   void inicializacionMapa();
   bool choquePPconObs();
   void movimientoFantasmas();
};


