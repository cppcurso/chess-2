/*
 * King.cpp
 *
 *  Created on: 01/03/2018
 *      Author: usuario
 */

#include "King.h"

King::King(bool b) : Piece(b) {
	figure = 'K';
}

bool King::validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo) {
	bool isValid = false;
	int cellX = xTo - xFrom;
	int cellY = yTo - yFrom;
	if (notMove(xFrom, yFrom, xTo, yTo) == true) return false;
	if (abs(cellX) == 1 && abs(cellY) == 0) {
		isValid = true;
	} else if (abs(cellX) == 0 && abs(cellY) == 1) {
		isValid = true;
	} else if (abs(cellX) == 1 && abs(cellY) == 1) {
		isValid = true;
	}
	return isValid;
}

