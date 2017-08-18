#ifndef ITEM_H
#define ITEM_H
#include "Personaje.h"

class Item : public Personaje
{
    public:
        Item();
        void drawMyPersonaje();

    protected:
        Posicion myPos;
        char cuerpo;

    private:
};

#endif // ITEM_H
