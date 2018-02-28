#ifndef SRC_CLASSGAME_PIECE_H_
#define SRC_CLASSGAME_PIECE_H_
#include <iostream>
#include <ctype.h>

class Piece {
protected:
	bool black;
	std::string color;
	char figure;
public:
	Piece(bool b);
	bool isBlack();
	char getFigure() const;
	void printPiece() const;
};

#endif /* SRC_CLASSGAME_PIECE_H_ */
