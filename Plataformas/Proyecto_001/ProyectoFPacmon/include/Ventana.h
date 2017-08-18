#ifndef VENTANA_H
#define VENTANA_H
#include "Posicion.h"
#include <stdio.h>
#include <windows.h>
#include <conio.h> /// inputs y outputs; GotoXY, permite
#include <time.h>
#include <sstream>

class Ventana
{
    public:
        void drawPixel(int x1,int y1, char a);
        void drawPixel(Posicion xy1,char a);
        void deletePixel(int x1,int y1);
        void deletePixel(Posicion xy1);
    protected:
        COORD coord={0,0};
        void GotoXY(int x, int y);



};

#endif // VENTANA_H
