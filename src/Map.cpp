//
// Created by ahmed on 10/19/2025.
//
#include "../include/Map.h"

Map::Map(int w, int h) {
    this->width = w;
    this->height = h;
    for (int column = 0; column < height; column++) {
        for (int row = 0; row < width; row++) {
            grid[column][row] = Cell(false,row,column);
        }
    }
}

int Map::getHeight() {
    return height;
}

int Map::getWidth() {
    return width;
}

Map::~Map() {

}

