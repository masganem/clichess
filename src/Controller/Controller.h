//
// Created by user on 13/11/22.
//

#ifndef CLICHESS_CONTROLLER_H
#define CLICHESS_CONTROLLER_H

#include <vector>
#include "../Tile/Tile.h"

using Map = typename std::vector<std::vector<Tile>>;

class Controller {
public:
    Map map;
    void show();
    int move(Coordinate from, Coordinate to);
    Controller();

    void announceMovement(Coordinate from, Coordinate to);
};


#endif //CLICHESS_CONTROLLER_H
