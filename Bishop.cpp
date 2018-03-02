/*
 * Bishop.cpp
 *
 *  Created on: 01/03/2018
 *      Author: usuario
 */

#include "Bishop.h"

Bishop::Bishop(bool b) : Piece(b) {
	figure = 'B';
}

bool Bishop::validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo) {
	bool isValid = false;
	int cellX = xTo - xFrom;
	int cellY = yTo - yFrom;
	if (notMove(xFrom, yFrom, xTo, yTo) == true)) return false;
	if (abs(cellX) == abs(cellY)) {
		isValid = true;
	}
	return isValid;
}
