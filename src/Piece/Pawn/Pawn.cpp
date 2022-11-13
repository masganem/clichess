//
// Created by user on 13/11/22.
//

#include "Pawn.h"

int Pawn::move(Coordinate from, Coordinate to) {
    if (to.j >= from.j - 1 && to.j <= from.j + 1) {
        if (color) {
            return (to.i == from.i + 1);
        } else {
            return (to.i == from.i - 1);
        }
    } else {
        return 0;
    }
}

Pawn::Pawn(int color) : Piece(color) {
    this->content = color ?  "👨" : "👩";
    this->color = color;
}
