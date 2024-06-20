#ifndef PLATAFORMAGRANDE_H_INCLUDED
#define PLATAFORMAGRANDE_H_INCLUDED
#include "Plataformas.h"

class PlataformaGrande :  public Plataformas
{
    protected:
        sf::Texture _texturaPlataformaGrande;
        sf::Sprite _plataformaGrande;
    public:
        PlataformaGrande();
         ~PlataformaGrande();

sf::FloatRect getBounds()const;
void update();
void draw(sf::RenderTarget& target, sf::RenderStates states) const ;
sf::Sprite& getDrawGrande();
void setPosicionGrande(float x,float y);
float getXGrande();
float getyGrande();

};



#endif // PLATAFORMAGRANDE_H_INCLUDED
