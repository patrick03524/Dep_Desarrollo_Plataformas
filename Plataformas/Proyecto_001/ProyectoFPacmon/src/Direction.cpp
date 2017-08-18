#include "Direction.h"

Direction::Direction()
{
    dirX = 1;
    dirY = 1;
}
Direction::Direction(int dir1):dirX(dir1),dirY(dir1){}
Direction::Direction(int dirX1,int dirY1):dirX(dirX1),dirY(dirY1){}
