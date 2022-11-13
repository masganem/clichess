//
// Created by user on 13/11/22.
//

#include <iostream>
#include "Controller.h"
#include "../Piece/Pawn/Pawn.h"
#include "../util/Letters.h"

Map getBlankMap() {
    Map map(8, std::vector<Tile>(8, Tile(0)));
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            map[i][j] = Tile((i+j) % 2);
    return map;
}

Map spawnPieces(Map map){
    for (int j = 0; j < 8; j++) {
        map[1][j].piece = new Pawn(1);
        map[6][j].piece = new Pawn(0);
    }
    return map;
}

int inBounds(int i) {
    return i < 8 && i > 0;
}

int inBounds(Coordinate c) {
    return inBounds(c.i) && inBounds(c.j);
}

Controller::Controller() {
    this->map = getBlankMap();
    this->map = spawnPieces(this->map);
}

void Controller::show() {
    for (int i = 0; i < 8; i++) {
        if (i) std::cout << std::endl;
        for (int j = 0; j < 8; j++)
            std::cout << (map[i][j].piece == nullptr ? map[i][j].square : map[i][j].piece->content);
    }
    std::cout << std::endl;
}

void Controller::announceMovement(Coordinate from, Coordinate to) {
    std::cout << std::endl << "🗣️\t" << letters[from.j] << from.i << " moves to " << letters[to.j] << to.i << std::endl << std::endl;
    this->show();
}

int Controller::move(Coordinate from, Coordinate to) {
    if (!inBounds(from) && inBounds(to)) return 0;
    Piece* piece = this->map[from.i][from.j].piece;
    if (piece == nullptr) return 0;
    if (piece->move(from, to)) {
        this->map[from.i][from.j].piece = nullptr;
        this->map[to.i][to.j].piece = piece;
        this->announceMovement(from, to);
    }
    return piece->move(from, to);
}
