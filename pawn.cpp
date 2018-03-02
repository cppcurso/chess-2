
#include "Pawn.h"

Pawn::Pawn(bool b) : Piece (b) {
		figure = 'P';
}

bool Pawn::validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo) {
	bool isValid = false;
	int cellX = xTo - xFrom;
	int cellY = yTo - yFrom;
	if (notMove(xFrom, yFrom, xTo, yTo) == true) return false;
	if (abs(cellY) == 1) {
		isValid = true;
	}
	return isValid;
}
