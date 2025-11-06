//
// Created by ahmed on 10/19/2025.
//
#include <iostream>
#include "../include/Cell.h"
using namespace  std;

Cell::Cell(bool alive, int x, int y) {
    this->alive = alive;
    this->x = x;
    this->y = y;
}

Cell::~Cell() {

}

bool Cell::is_alive() {
    return alive;
}

void Cell::checkSurroundings(Map* map) {
    int neighbortally = 0;
        for (int i = y-1;i < y+1; i++) {
            if (i < 0) {
                i = 0;
            }
            for (int j = x-1; j < x+1; j++) {
                if (j < 0) {
                    j = 0;
                }
                if (map->getCell(i,j)->is_alive()) {
                    neighbortally++;
                }
            }
        }

    if (neighbortally < 2 || neighbortally > 3) {
        alive = false;
    }else if (neighbortally == 3) {
        alive = true;
    }
}


