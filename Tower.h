/*
 * Tower.h
 *
 *  Created on: 01/03/2018
 *      Author: usuario
 */

#ifndef SRC_CLASSGAME_TOWER_H_
#define SRC_CLASSGAME_TOWER_H_
#include "Piece.h"

class Tower : public Piece {
public:
	Tower(bool b);
	//~Tower();
	bool validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo);
};

#endif /* SRC_CLASSGAME_TOWER_H_ */
