#include <iostream>
#include "Cell.h"
#include "Board.h"

using namespace std;

class Piece{
  string name;
  Cell* cell;
  bool black;
  char figure;
public:

  string getColour();
  string getName();
  
  bool isBlack();
  void move();
  virtual bool valid() = 0;
  void setCell(Cell* c);

};
