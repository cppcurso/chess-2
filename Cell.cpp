#include "Cell.h"

int Cell::getX() const {
	return x;
}

int Cell::getY() const {
	return y;
}

void Cell::setPiece(Piece* p) {
	piece = p;
}

bool Cell::isOccupied() {
	return piece;
}

Piece* Cell::occupiedBy() {
	return piece;
}
