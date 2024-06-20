#ifndef PLATAFORMACHICA_H_INCLUDED
#define PLATAFORMACHICA_H_INCLUDED
#include "Plataformas.h"
class PlataformaChica :  public Plataformas
{
    protected:
        sf::Texture _texturaPlataformaChica,_texturaPlataformaChica2;
        sf::Sprite _plataformaChica,_plataformaChica2;
    public:
        PlataformaChica();
         ~PlataformaChica();

sf::FloatRect getBounds()const;
sf::FloatRect getBounds2()const;

void update();
	 void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
sf::Sprite& getDrawChica();
sf::Sprite& getDrawChica2();

void setPosicionChica(float x,float y);


float getXChica();
float getyChica();

};







#endif // PLATAFORMACHICA_H_INCLUDED
