#include "Piece.h"

Piece::Piece(bool b) : black(b), figure(' '){
	if (b == true) {
		color = "Black";
	} else {
		color = "White";
	}
}

char Piece::getFigure() const {
	return figure;
}

bool Piece::isBlack() {
	return black;
}

void Piece::printPiece() const {
	if (black == true) {
		std::cout << toupper(figure) << " ";
	} else {
		std::cout << tolower(figure) << " ";
	}
}
