#include <iostream>
using namespace std;
#include "../include/Simulation.h"

int main() {
    int width;
    int height;
    cout<<"Please enter a map width";
    cin>>width;
    cout<<"Please enter a map height";
    cin>>height;
    Map map(width,height);
    Simulation sim(map,false);
    sim.run();

    return 0;
}