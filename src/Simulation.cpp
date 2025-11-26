//
// Created by ahmed on 10/19/2025.
//

#include "../include/Simulation.h"
#include <iostream>
using namespace std;
Simulation::Simulation(Map map, bool flag) : map(map), flag(flag) {
    cout<<"Welcome to Conway's game of life"<<endl;
    cout<<"To start enter a row and a column"<<endl;
    cout<<"To start the simulation enter s"<<endl;
    cout<<"To quit enter q"<<endl;
    while (flag == true) {
        char input;
        char input2;
        cout<<"Please enter a cell row:"<<endl;
        cin>>input;
        if (input < '0' || input > map.getWidth()) {
            cout<<"Please enter a possible number between 0 and the row minus 1"<<endl;
            cin>>input;
        }
        cout<<"Please enter a column:"<<endl;
        cin>>input2;
        if ( input2 < '0' || input2 > map.getHeight()) {
            cout<<"Please enter a possible number between 0 and the column minus 1"<<endl;
            cin>>input2;
        }
        map.getCell(input, input2).set_alive(true);
        if(input == 'q' || input == 'Q' || input2 == 'q' || input2 == 'Q') {
            flag = false;
            cout<<"You quit the game"<<endl;
        }
        if (input == 's' || input == 'S' || input2 == 's' || input2 == 'S') {
            for (int i = 0; i < map.getWidth(); i++) {
                for (int j = 0; j < map.getHeight(); j++) {
                    map.getCell(i, j).checkSurroundings();
                }
            }
        }

    }
}
