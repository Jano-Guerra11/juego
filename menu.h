#pragma once
#include <SFML/graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;
#define Max_main_menu 4 ///Se define la maxima cantidad de opciones en el menu

class MainMenu{
private:
    int MainMenuSelected; ///Opcion del menu seleccionada
    Font fuente; ///Fuente de texto
    Text mainMenu[Max_main_menu];
public:
    MainMenu(float width, float height);

    void draw(RenderWindow& window);
    void MoveUp(); ///Seleccionar una opcion mas arriba
    void MoveDown(); ///Seleccionar una opcion mas abajo

    int mainMenuPressed() {
        return MainMenuSelected; ///Devuelve la opcion del menu que esta seleccionada
    }
    ~MainMenu();
};
