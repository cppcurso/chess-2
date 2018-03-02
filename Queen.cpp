/*
 * Queen.cpp
 *
 *  Created on: 28/02/2018
 *      Author: usuario
 */

#include "Queen.h"

Queen::Queen(bool b) : Piece(b){
	figure = 'Q';
}

bool Queen::validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo) {
	bool isValid = false;
	int cellX = xTo - xFrom;
	int cellY = yTo - yFrom;
	if (notMove(xFrom, yFrom, xTo, yTo) == true) return false;
	if (abs(cellX) == 0 && abs(cellY) != 0) {
		isValid = true;
	} else if (abs(cellX) != 0 && abs(cellY) == 0) {
		isValid = true;
	} else if (abs(cellX) == abs(cellY)) {
		isValid = true;
	}
	return isValid;
}
