/*
 * Bishop.h
 *
 *  Created on: 01/03/2018
 *      Author: usuario
 */

#ifndef SRC_CLASSGAME_BISHOP_H_
#define SRC_CLASSGAME_BISHOP_H_
#include "Piece.h"

class Bishop : public Piece {
public:
	Bishop(bool b);
	~Bishop();
	bool validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo);
};

#endif /* SRC_CLASSGAME_BISHOP_H_ */
