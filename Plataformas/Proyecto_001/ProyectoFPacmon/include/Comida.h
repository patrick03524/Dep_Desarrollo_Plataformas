#ifndef COMIDA_H
#define COMIDA_H
#include "Posicion.h"
#include "Personaje.h"

class Comida : public Personaje
{
    public:
        Comida();
        Comida(int x1, int y1, char c1);
        Comida(Posicion xy1, char c2);
    private:
        Posicion pos;
        char *cuerpo;
};

#endif // COMIDA_H
