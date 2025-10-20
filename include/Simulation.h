#ifndef CONWAY_S_GAME_OF_LIFE_SIMULATION_H
#define CONWAY_S_GAME_OF_LIFE_SIMULATION_H
#include "Map.h"

class Simulation {
    private:
    Map map;

    public:
    Simulation(Map map);
    ~Simulation();
    void run(); // runs a simulation and asks the user for an input to change a cell from alive to dead
};


#endif
