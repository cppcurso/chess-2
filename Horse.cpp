/*
 * Horse.cpp
 *
 *  Created on: 01/03/2018
 *      Author: usuario
 */

#include "Horse.h"

Horse::Horse(bool b) : Piece(b) {
	figure = 'H';
}

bool Horse::validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo) {
	bool isValid = false;
	int cellX = xTo - xFrom;
	int cellY = yTo - yFrom;
	if (notMove(xFrom, yFrom, xTo, yTo) == true) return false;
	if (abs(cellX) == 1 && abs(cellY) == 2) {
		isValid = true;
	} else if (abs(cellX) == 2 && abs(cellY) == 1) {
		isValid = true;
	}
	return isValid;
}

