#include <iostream>

using namespace std;

class Piece{
  int x,y;
  bool black;
  char figure;
public:
  string getColour();
  string getName();

  void move();
  bool valid();

};
