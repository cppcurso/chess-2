/*
 * Pawn.h
 *
 *  Created on: 01/03/2018
 *      Author: usuario
 */

#ifndef SRC_CLASSGAME_PAWN_H_
#define SRC_CLASSGAME_PAWN_H_
#include "Piece.h"

class Pawn : public Piece {
public:
	Pawn(bool b);
	//~Pawn();
	bool validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo);
};

#endif /* SRC_CLASSGAME_PAWN_H_ */
