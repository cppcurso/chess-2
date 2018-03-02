/*
 * Cell.cpp
 *
 *  Created on: 27/02/2018
 *      Author: usuario
 */

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
	if (piece == nullptr) {
		return false;
	} else {
		return true;
	}
}

Piece* Cell::occupiedBy() {
	return piece;
}

Piece* Cell::getPiece() {
	return piece;
}

void Cell::printCell() {
	if (isOccupied() == false) {
		std::cout << "0" << " ";
	} else {
		piece->printPiece();
	}
}


