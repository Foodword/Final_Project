//
// Created by ahmed on 10/19/2025.
//

#ifndef CONWAY_S_GAME_OF_LIFE_SIMULATION_H
#define CONWAY_S_GAME_OF_LIFE_SIMULATION_H
#include "Map.h"

class Simulation {
    private:
    Map map;
    bool flag;
    public:
    Simulation(Map map, bool flag);
    ~Simulation();
    void run(); // runs a simulation and asks the user for an input to change a cell from alive to dead
};


#endif //CONWAY_S_GAME_OF_LIFE_SIMULATION_H