#include <iostream>
#include "src/Controller/Controller.h"
#include "src/Piece/Pawn/Pawn.h"

int main() {
    Controller c = Controller();
    c.show();
    c.move({i: 1, j: 1}, {i: 2, j: 1});
    c.move({i: 6, j: 1}, {i: 5, j: 1});
    return 0;
}