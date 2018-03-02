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

bool Tower::validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo){
	if(notMove(xFrom,yFrom,xTo,yFrom)==true) return false;
	bool valid=false;
	int x = xTo -xFrom;
	int y = yTo - yFrom;
	if(x ==0 && y !=0){// movimiento en vertical
		valid = true;
	}else if(y ==0 && x != 0){// movimiento en horizontal
		valid = true;
	}
	return valid;
}
