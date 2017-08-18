#include "Obstaculos.h"

Obstaculos::Obstaculos():Personaje(),status(1)
{

}

Obstaculos::Obstaculos(char c):Personaje(c),status(1)
{

}

Obstaculos::Obstaculos(Posicion p,char c): Personaje(c,p), status(1)
{

}
void Obstaculos::setStatus(int s){status=s;}
int Obstaculos::getStatus(){return status;}
void Obstaculos::drawMyPersonaje()
{
    cuerpo = '£';
    Personaje::drawMyPersonaje();
}
bool Obstaculos::verImpact(Pocman b)
{
    if(myPos.x==b.getPosicion().x && myPos.y==b.getPosicion().y ){
        status=0;
        return true;
    }
    return false;
}
void Obstaculos::Saludar()
{
    cout<<"Obstaculos encontrados!";
}
