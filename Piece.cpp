#include <iostream>

#include "Piece.h"

using namespace std;

Piece::Piece(bool b, char f) : cell(nullptr), black(b), figure(f) {
		if (b == true) {
			color = "Black";
		} else {
			color = "White";
		}
}

void Piece::setCell(const Cell*& cell) {
	this->cell = cell;
}

char Piece::getFigure() const {
	return figure;
}

bool Piece::isBlack() {
	return black;
}

string Piece::getColour() {
    return color;
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
