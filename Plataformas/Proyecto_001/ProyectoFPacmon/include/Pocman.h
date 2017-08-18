#ifndef POCMAN_H
#define POCMAN_H
#include "Personaje.h"
#include "Direction.h"


class Pocman : public Personaje
{
    public:
        Pocman();
        Pocman(char *nombre1, char cuerpo1,int vida1,Posicion pos1,Direction dir1);
        ~Pocman();
        void Saludar();
        void setDireccion(Direction dir2);
        Direction getDireccion();
        void drawMyPersonaje();
        unsigned int getVida();
        Posicion getPosicion();
    private:
        char *nombre;
        char cuerpo;
        unsigned int vida;
        Posicion pos;
        Direction dir;
};

#endif // POCMAN_H
