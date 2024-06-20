#ifndef PLATAFORMAMEDIANA3_H_INCLUDED
#define PLATAFORMAMEDIANA3_H_INCLUDED

#include "Plataformas.h"
class PlataformaMediana3 :  public Plataformas
{
    protected:
        sf::Texture _texturaPlataformaMediana3;
        sf::Sprite _plataformaMediana3;
    public:
        PlataformaMediana3();
         ~PlataformaMediana3();

sf::FloatRect getBounds()const;


void update();
	 void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
sf::Sprite& getDrawMediana3();

void setPosicionMediana3(float x,float y);


float getXMedia3();
float getyMedia3();

};


#endif // PLATAFORMAMEDIANA3_H_INCLUDED
