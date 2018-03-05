/*
 * StandarStrategy.cpp
 *
 *  Created on: 05/03/2018
 *      Author: usuario
 */

#include "StandardStrategy.h"

bool StandardStrategy::validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo) {
	bool isValid = false;
	int cellX = xTo - xFrom;
	int cellY = yTo - yFrom;
	if (Piece::notMove(xFrom, yFrom, xTo, yTo) == true) return false;
	if (abs(cellY) == 0 && abs(cellX) == 1) {
		isValid = true;
	}
	return isValid;
}


bool StandardStrategy::attack(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo, Cell* from, Cell* to){
	return false;
}
