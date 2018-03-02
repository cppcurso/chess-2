#include "King.h"

King::King (bool b) : Piece (b) {
	figure = 'k';

}

bool King::validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo){
	if(notMove(xFrom,yFrom,xTo,yFrom)==true) return false;
	bool valid=false;
	int x = xTo -xFrom;
	int y = yTo - yFrom;
	if(x ==0 && abs(y) ==1){// movimiento en vertical
			valid = true;
	}else if(y ==0 && abs(x) == 1){// movimiento en horizontal
			valid = true;
	}else if(abs(y)==1 && abs(x)==1){// movimiento en diagonal
			valid = true;
	}
	return valid;
}
