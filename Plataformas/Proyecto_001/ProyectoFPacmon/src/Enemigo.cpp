#include "Enemigo.h"


Enemigo::Enemigo()
{
    this -> nombre = NULL;
    this -> cuerpo = NULL;
    this -> vida = 0;
}
Enemigo::Enemigo(char *nombre1, char cuerpo1,int vida1)
{
    nombre = new char[20];
    this -> nombre = nombre1;
    this -> cuerpo = cuerpo1;
    this -> vida = vida1;
}

Enemigo::~Enemigo()
{
    delete[] nombre;

}
void Enemigo::Saludar()
{
    cout <<"Hola soy un enemigo alv ahora te wa a tocar la jalea"<<endl;
    cout <<"Soy el malvado "<<nombre<<endl;
}
void Enemigo::setPosicion()
{

}
void Enemigo::drawMyPersonaje()
{
    deletePixel(pos);
    srand (time(NULL));
    int num_aleat = rand()%4;
    Direction dirMovEnemigo;
    Sleep(3000);
    switch(num_aleat){
        case 0: ///arriba
        {
            dirMovEnemigo.dirY=-1;
            dirMovEnemigo.dirX=0;
        }
        case 1: ///abajo
        {
            dirMovEnemigo.dirY=1;
            dirMovEnemigo.dirX=0;
        }
        case 2: ///izquierda
        {
            dirMovEnemigo.dirX=-1;
            dirMovEnemigo.dirY=0;
        }
        case 3: ///derecha
        {
            dirMovEnemigo.dirX=1;
            dirMovEnemigo.dirY=0;
        }
    }
    Posicion newPosi (pos.x + dirMovEnemigo.dirX, pos.y + dirMovEnemigo.dirY);
    moveMyPersonaje(newPosi);
    Personaje::drawMyPersonaje();
}
char Enemigo::getVida(){return vida;}
Posicion Enemigo::getPosicion(){return pos;}
