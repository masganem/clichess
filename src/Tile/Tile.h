//
// Created by user on 13/11/22.
//

#ifndef CLICHESS_TILE_H
#define CLICHESS_TILE_H


#include <string>
#include "../Piece/Piece.h"

class Tile {
public:
    std::string square;
    Piece* piece = nullptr;
    Tile(int color);
};


#endif //CLICHESS_TILE_H
