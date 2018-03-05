/*
 * Piece.h
 *
 *  Created on: 27/02/2018
 *      Author: usuario
 */

#ifndef SRC_CLASSGAME_PIECE_H_
#define SRC_CLASSGAME_PIECE_H_
#include <iostream>
#include <ctype.h>
#include <cstdlib>

class Piece {
protected:
	bool black;
	std::string color;
	char figure;

public:
	static bool notMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo);
	Piece(bool b);
	//virtual ~Piece();
	bool isBlack();
	char getFigure() const;
	void printPiece() const;
	virtual bool validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo) = 0;
};

#endif /* SRC_CLASSGAME_PIECE_H_ */
