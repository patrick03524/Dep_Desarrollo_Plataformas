#include "Personaje.h"

Personaje::Personaje()
{
    this -> nombre = NULL;
    this -> cuerpo = NULL;
    this -> vida = 0;
}
Personaje::Personaje(char cuerpo1)
{
    this ->cuerpo = cuerpo1;
}
Personaje::Personaje(char cuerpo1,Posicion pos1):cuerpo(cuerpo1),myPos(pos1){}
Personaje::Personaje(char *nombre1, char cuerpo1,int vida1)
{
    nombre = new char[20];
    this -> nombre = nombre1;
    this -> cuerpo = cuerpo1;
    this -> vida = vida1;
}
Personaje::Personaje(char *nombre1, char cuerpo1,int vida1,Posicion pos1)
    :nombre(nombre1),cuerpo(cuerpo1),vida(vida1),myPos(pos1){}
Personaje::~Personaje()
{
    delete[] nombre;

}
void Personaje::Saludar(){}
void Personaje::drawMyPersonaje(){}
void Personaje::setForm(char newForm){cuerpo = newForm;}
void Personaje::moveMyPersonaje(Posicion newPosicion)
{
    myPos = newPosicion;
}
void Personaje::moveMyPersonajeAndDraw(Posicion newPosicion)
{
    deletePixel(myPos);
    moveMyPersonaje(newPosicion);
    drawMyPersonaje();

}
Posicion Personaje::getPosicion(){return myPos;}
unsigned int Personaje::getVida(){return vida;}
