#ifndef GAMEMODE1_H
#define GAMEMODE1_H
#include "Menu.h"
#include "Pocman.h"
#include "Obstaculos.h"
const char UP = 72;
const char LEFT = 75;
const char RIGHT = 77;
const char DOWN = 80;
const char ESC = 27;
const char SPACE = 32;
const int numObst = 28;
///template <typename T>

class GameMode1
{
    public:
        GameMode1();
        ~GameMode1();
        void startGameMainMenu();
        void startGameMode1();
        void refrescarGameMode1();
        bool colisionPocman(Pocman myCurrentPocman);
    protected:
        Menu *myMainMenu;
        Pocman *MyHeroPocman;
        Obstaculos *myObstaculos[numObst];
        int score; ///T :: template
};

#endif // GAMEMODE1_H
