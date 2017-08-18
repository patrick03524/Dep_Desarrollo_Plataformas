#include "GameMode1.h"
int numPocmanLives = 3;

GameMode1::GameMode1()
{

    myMainMenu = new Menu(Size(40,15),Posicion(5,5));

    Posicion tWindow = myMainMenu -> getPosicion(); ///posicion de Pocman
    tWindow.x +=5;
    tWindow.y +=4;
    MyHeroPocman = new Pocman(NULL,'o',numPocmanLives,tWindow,Direction(1,0));
    Posicion t2;
    Size tSize = myMainMenu -> getSize(); ///tamaño de la pantalla
    tWindow = myMainMenu -> getPosicion();
    tWindow.x++;
    tWindow.y++;
    srand(time(NULL));
    for(int i = 0; i<numObst;i++)
    {
        t2.x = tWindow.x+rand()%(tSize.width-2);
        t2.y = tWindow.y+rand()%(tSize.height-2);
        myObstaculos[i]= new Obstaculos(t2,'£');


    }
}
void GameMode1::startGameMainMenu()
{
    cout << "\t\t POCMAN ADVENTURES ::: |:v| "<< endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Bienvenido al Increible Mundo de Pocman ADVENTURES 3D/2D 1 link + medicina 100% real no fake MEGA 2018" <<endl;
    cout << "Usted tiene el gran honor y privilegio de poder acceder a la Beta del juego " <<endl;
    cout << "No se mmon y apoye a los desarrolladores :v " <<endl;
    cout << endl;
    system("pause");
    cout <<"\tIngresando al juego ...."<<endl;
    cout <<"\t...."<<endl;
    cout << endl;
}
void GameMode1::refrescarGameMode1()
{
    score=0;

    for(int i=0;i<numObst;i++)
    {
        myObstaculos[i] -> verImpact(*MyHeroPocman);

        if(myObstaculos[i]->getStatus()==1)
            myObstaculos[i]->drawMyPersonaje();
        else
            score++;
    }

    MyHeroPocman->drawMyPersonaje();
    stringstream s;  ///permite ingresar a cualquier tipo de dato y los convierte en strings
    s<<score;
    myMainMenu->showMessage(Posicion(0,1),string("Score: ")+s.str());
}
bool GameMode1::colisionPocman(Pocman myCurrentPocman)
{
    Posicion posb=myCurrentPocman.getPosicion();
    Posicion posw=myMainMenu->getPosicion();
    Size sizew=myMainMenu->getSize();
    if(posb.x > posw.x && posb.x < posw.x +sizew.width-1 && posb.y > posw.y && posb.y < posw.y +sizew.height-1)
        return false;
    return true;
}
GameMode1::~GameMode1()
{
    delete myMainMenu;
}
void GameMode1::startGameMode1()
{
    char c;
    bool endGameMode1=false;
    myMainMenu ->drawGame1Menu();
    do{
        if(kbhit()){ ///verifica si mantienes apretada una tecla
            c = getch();
            Direction d = MyHeroPocman->getDireccion();
            switch (c)
            {
                case ESC:
                {
                    Posicion p1(1,1);
                    endGameMode1 = true;
                    system("cls");
                    myMainMenu->showMessage(p1,"Chao prro :V!");
                    system("pause");
                    exit(0);
                }
                case SPACE:
                {
                    Posicion p1(1,1);
                    myMainMenu->showMessage(p1,string("escape key pressed"));
                    system("pause");
                    break;
                }
                case UP:
                    d.dirY=-1;
                    d.dirX=0;
                    break;
                case DOWN:
                    d.dirY=1;
                    d.dirX=0;
                    break;
                case LEFT:
                    d.dirX=-1;
                    d.dirY=0;
                    break;
                case RIGHT:
                    d.dirX=1;
                    d.dirY=0;
                    break;

            }
            MyHeroPocman->setDireccion(d);
        }
        if(colisionPocman(*MyHeroPocman))
        {
            endGameMode1=true;
            myMainMenu->showMessage(Posicion(0,2),string("Pocman Colisiono"));
            break;
        }
        else
        {
            refrescarGameMode1();
        }

        if(score==numObst)
        {
            endGameMode1=true;
            myMainMenu->showMessage(Posicion(0,2),string("Ganaste!"));
        }

        Sleep(200);
    }while(!endGameMode1);

}


