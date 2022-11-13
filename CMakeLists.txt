cmake_minimum_required(VERSION 3.23)
project(clichess)

set(CMAKE_CXX_STANDARD 14)

add_executable(clichess
        main.cpp src/Controller/Controller.cpp src/Controller/Controller.h src/Tile/Tile.cpp src/Tile/Tile.h src/Piece/Piece.cpp src/Piece/Piece.h src/Piece/Pawn/Pawn.cpp src/Piece/Pawn/Pawn.h src/util/Letters.h)
