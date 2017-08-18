#ifndef MENU_H
#define MENU_H
#include "Ventana.h"
#include "Posicion.h"
#include "Size.h"

class Menu : public Ventana
{
    public:
        Menu();
        Menu(Size size1);
        Menu(Size size2, Posicion pos1);
        void showMessage(Posicion pos2, string message1);
        void drawGame1Menu();
        void drawGame2Menu();
        void drawExitMenu();
        Posicion getPosicion();
        Size getSize();
    protected:
        Posicion pos;
        Size mySize;

};
#endif // MENU_H

