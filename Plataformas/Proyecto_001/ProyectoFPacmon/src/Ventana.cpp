#include "Ventana.h"

void Ventana::GotoXY(int x, int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void Ventana::drawPixel(int x1,int y1, char a)
{
    GotoXY(x1,y1);
    cout <<a;
}
void Ventana::drawPixel(Posicion xy1,char a)
{
    GotoXY(xy1.x,xy1.y);
    cout <<a;
}
void Ventana::deletePixel(int x1,int y1)
{
    GotoXY(x1,y1);
    cout <<" ";
}
void Ventana::deletePixel(Posicion xy1)
{
    GotoXY(xy1.x,xy1.y);
    cout <<" ";
}
