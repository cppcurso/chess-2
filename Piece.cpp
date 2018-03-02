#include "Piece.h"

Piece::Piece(bool b) : black(b), figure(' '){
	if (b == true) {
		color = "Black";
	} else {
		color = "White";
	}
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

bool Piece::isBlack() {
	return black;
}

void Piece::printPiece() const {
	if (black == true) {
		std::cout << (char) toupper(figure) << " ";
	} else {
		std::cout << (char) tolower(figure) << " ";
	}
}
