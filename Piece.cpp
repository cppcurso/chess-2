#include <iostream>

#include "Piece.h"

using namespace std;


bool Piece::isBlack() {
	return black;
}

Piece::Piece(char figura, bool black) {
    this->figura=figura;
    this->black=black;
}

string Piece::getColour() {
    string colour;
    if (black==true) {
      colour="negro";
    } else {
      colour="blanco";
    }
    return colour;
}

string Piece::getName() {
    return name;
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

bool Piece::isOnCell() {
	return cell;
}
