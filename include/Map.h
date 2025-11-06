//
// Created by ahmed on 10/19/2025.
//

#ifndef CONWAY_S_GAME_OF_LIFE_MAP_H
#define CONWAY_S_GAME_OF_LIFE_MAP_H
#include "Cell.h"

class Map {
private:
int width;
int height;
Cell **grid;

public:
    Map(int w, int h);
    Cell getCell(int i, int j);
    int getWidth();
    int getHeight();
    ~Map();
};


#endif //CONWAY_S_GAME_OF_LIFE_MAP_H