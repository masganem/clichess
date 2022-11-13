//
// Created by user on 13/11/22.
//

#ifndef CLICHESS_PIECE_H
#define CLICHESS_PIECE_H


#include <string>

struct Coordinate {
    int i;
    int j;
};

class Piece {
public:
    std::string content;
    int color;
    virtual int move(Coordinate from, Coordinate to);
    Piece(int color);
};


#endif //CLICHESS_PIECE_H
