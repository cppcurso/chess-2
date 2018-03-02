#ifndef SRC_CLASSGAME_PIECE_H_
#define SRC_CLASSGAME_PIECE_H_
#include <iostream>
#include <ctype.h>

class Piece {
protected:
	bool black;
	std::string color;
	char figure;
	bool notMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo);
public:
	Piece(bool b);
	virtual ~Piece();
	bool isBlack();
	char getFigure() const;
	void printPiece() const;
	virtual bool validMove () = 0;
};

#endif /* SRC_CLASSGAME_PIECE_H_ */
