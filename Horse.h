/*
 * Horse.h
 *
 *  Created on: 01/03/2018
 *      Author: usuario
 */

#ifndef SRC_CLASSGAME_HORSE_H_
#define SRC_CLASSGAME_HORSE_H_
#include "Piece.h"

class Horse : public Piece {
public:
	Horse(bool b);
	//~Horse();
	bool validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo);
};

#endif /* SRC_CLASSGAME_HORSE_H_ */
