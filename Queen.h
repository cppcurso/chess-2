/*
 * Queen.h
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#ifndef SRC_CLASSGAME_QUEEN_H_
#define SRC_CLASSGAME_QUEEN_H_
#include "Piece.h"

class Queen : public Piece {
public:
	Queen(bool b);
	//~Queen();
	bool validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo);
};

#endif /* SRC_CLASSGAME_QUEEN_H_ */
