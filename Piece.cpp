/*
 * Piece.cpp
 *
 *  Created on: 27/02/2018
 *      Author: usuario
 */

#include "Piece.h"

Piece::Piece(bool b) : black(b), figure(' '){
}

bool Piece::notMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo) {
	bool notMove = false;
	int cellX = xTo - xFrom;
	int cellY = yTo - yFrom;
	if (cellX == 0 && cellY == 0) {
		notMove = true;
	}
	return notMove;
}

char Piece::getFigure() const {
	return figure;
}

bool Piece::getBlack() const {
	return black;
}

bool Piece::isBlack() {
	return black;
}

void Piece::setCells(Cell* from, Cell* to){
 this->from = from;
 this->to = to;
}

void Piece::printPiece() const {
	if (black == true) {
		std::cout << (char)toupper(figure) << " ";
	} else {
		std::cout << (char)tolower(figure) << " ";
	}
}
