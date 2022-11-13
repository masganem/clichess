//
// Created by user on 13/11/22.
//

#include "Tile.h"

Tile::Tile(int color) {
    if (color == 1) {
        this->square = "⬛";
    } else {
        this->square = "⬜";
    }
}