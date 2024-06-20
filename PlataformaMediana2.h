#ifndef PLATAFORMAMEDIANA2_H_INCLUDED
#define PLATAFORMAMEDIANA2_H_INCLUDED

#include "Plataformas.h"
class PlataformaMediana2 :  public Plataformas
{
    protected:
        sf::Texture _texturaPlataformaMediana2;
        sf::Sprite _plataformaMediana2;
    public:
        PlataformaMediana2();
         ~PlataformaMediana2();

sf::FloatRect getBounds()const;


void update();
	 void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
sf::Sprite& getDrawMediana2();

void setPosicionMediana2(float x,float y);


float getXMedia2();
float getyMedia2();

};



#endif // PLATAFORMAMEDIANA2_H_INCLUDED
