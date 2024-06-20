#ifndef PLATAFORMAGRANDE2_H_INCLUDED
#define PLATAFORMAGRANDE2_H_INCLUDED
#include "Plataformas.h"

class PlataformaGrande2 :  public Plataformas
{
    protected:
        sf::Texture _texturaPlataformaGrande2;
        sf::Sprite _plataformaGrande2;
    public:
        PlataformaGrande2();
         ~PlataformaGrande2();

sf::FloatRect getBounds()const;
void update();
void draw(sf::RenderTarget& target, sf::RenderStates states) const ;
sf::Sprite& getDrawGrande();
void setPosicionGrande(float x,float y);
float getXGrande();
float getyGrande();

};

#endif // PLATAFORMAGRANDE2_H_INCLUDED
