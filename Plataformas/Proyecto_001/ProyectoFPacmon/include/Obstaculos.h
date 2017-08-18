#ifndef OBSTACULOS_H
#define OBSTACULOS_H
#include "Personaje.h"
#include "Pocman.h"

class Obstaculos : public Personaje
{
    public:
        Obstaculos();
        Obstaculos(char obsCuerpo);
        Obstaculos(Posicion,char);
        void drawMyPersonaje();
        void setStatus(int s);
        int getStatus();
        bool verImpact(Pocman b);
        void Saludar();

    protected:
        int status; ///estado del obstaculo 1 si está presente en el juego, 0 sino



};

#endif // OBSTACULOS_H
