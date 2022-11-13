//
// Created by user on 13/11/22.
//

#ifndef CLICHESS_PAWN_H
#define CLICHESS_PAWN_H


#include "../Piece.h"

class Pawn: public Piece {
public:
    int move(Coordinate from, Coordinate to);
    Pawn(int color);
};


#endif //CLICHESS_PAWN_H
