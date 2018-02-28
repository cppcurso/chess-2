#include <iostream>

using namespace std;

class Piece {
    Cell* cell;
    bool black;
    char figure;
public:

  Piece();
  Piece(char figure, bool black);

  string getColour();
  string getName();

  void move();
  bool valid();
  void setCell(Cell* c);
  Cell* location();

};
