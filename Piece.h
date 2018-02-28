#include <iostream>

using namespace std;

class Piece {
    Cell* cell;
    bool black;
    char figure;
public:

  Piece(char figure, bool black, Cell* cell = nullptr):figure(figure),black(black);

  string getColour();
  string getName();

  void move();
  bool valid();
  void setCell(Cell* c);
  Cell* location();

};
