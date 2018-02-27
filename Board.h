#include <iostream>
#include <array>

class Board {
    Piece* board[8][8];
public:
    void init();
    bool valid( int x, int y, Piece piece);
    void move(int x, int y, Piece piece);
    void print();
};
