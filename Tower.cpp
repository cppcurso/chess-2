/*
 * Tower.cpp
 *
 *  Created on: 01/03/2018
 *      Author: usuario
 */

#include "Tower.h"

Tower::Tower(bool b) : Piece(b) {
	figure = 'T';
}

bool Tower::validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo) {
	bool isValid = false;
	int cellX = xTo - xFrom;
	int cellY = yTo - yFrom;
	if (notMove(xFrom, yFrom, xTo, yTo) == true) return false;
	if (abs(cellX) == 0 && abs(cellY) != 0) {
		isValid = true;
	} else if (abs(cellX) != 0 && abs(cellY) == 0) {
		isValid = true;
	}
	return isValid;
}

