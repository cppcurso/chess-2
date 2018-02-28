#include <iostream>
#include <string>
#include "Cell.h"
#include "Board.h"
using namespace std;

class Piece {
    string name;
    Cell* cell;
    bool black;
    char figure;
public:

  Piece(char figure, bool black, Cell* cell = nullptr):figure(figure),black(black);

  string getColour();
  string getName();

  bool isBlack();
  void move(int x, int y);
  virtual bool valid()=0;
  void setCell(Cell* c);

};
