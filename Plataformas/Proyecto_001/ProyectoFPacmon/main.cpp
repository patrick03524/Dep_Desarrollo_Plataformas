#include <iostream>
#include "Personaje.h"
#include "Enemigo.h"
#include "Pocman.h"
#include "GameMode1.h"
using namespace std;

int main()
{
    GameMode1 MyGame;
    MyGame.startGameMainMenu();
    system("pause");
    system("cls");
    MyGame.startGameMode1();


    return 0;
}
