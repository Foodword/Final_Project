#ifndef CONWAY_S_GAME_OF_LIFE_MAP_H
#define CONWAY_S_GAME_OF_LIFE_MAP_H


class Map {
private:
int width;
int height;
Cell **map;

public:
    Map(int w, int h);
    ~Map();

};


#endif
