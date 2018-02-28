#include <iostream>

#include "Piece.h"

using namespace std;

string Piece::getColour() {
    bool black;
    string colour;
    if (black=true) {
      colour="negro";
    } else {
      colour="blanco";
    }
    return colour;
}

string Piece::getName() {
    string p = "pawn";
    string k = "king";
    string q = "queen";
    string b = "bishop";
    string t = "tower";
    string h = "horse";
}

void Piece::move(x,y) {
  int x;
  int y;
}

void Piece::setCell(Cell* c) {
    cell = c;
}

Cell* Piece::location() {
    return cell;
}
// bool Piece::valid(x, y){
//   bool check=true;
//   return check;
// }
