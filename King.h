/*
 * King.h
 *
 *  Created on: 01/03/2018
 *      Author: usuario
 */

#ifndef SRC_CLASSGAME_KING_H_
#define SRC_CLASSGAME_KING_H_
#include "Piece.h"

class King : public Piece {
public:
	King(bool b);
	//~King();
	bool validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo);
};

#endif /* SRC_CLASSGAME_KING_H_ */
