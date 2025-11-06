//
// Created by ahmed on 10/19/2025.
//

#ifndef CONWAY_S_GAME_OF_LIFE_CELL_H
#define CONWAY_S_GAME_OF_LIFE_CELL_H
#include "Map.h"

class Cell {
private:
    bool alive;
    int x;
    int y;
public:
    Cell(bool alive, int x, int y);
    ~Cell();
    bool is_alive();
    void checkSurroundings(Map* map); //checks for the surroundings and implements the rules for the game of life
};


#endif //CONWAY_S_GAME_OF_LIFE_CELL_H