/*
 * AttackStrategy.cpp
 *
 *  Created on: 05/03/2018
 *      Author: usuario
 */

#include "AttackStrategy.h"


bool AttackStrategy::validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo) {
	return false;
}


bool AttackStrategy::attack(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo, Cell* from, Cell* to) {
	bool attack = false;
	int cellX = xTo - xFrom;
	int cellY = yTo - yFrom;

	if (!to->isOccupied()) return false;
	if (to->isOccupied()) {
		if(from->getPiece()->isBlack() != to->getPiece()->isBlack()) {
			if ((abs(cellY)== abs(cellX))== 1){
				attack = true;
			}

		}
	}



	return attack;
}
