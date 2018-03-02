#include "Horse.h"

Horse::Horse (bool b) : Piece (b) {
	figure = 'h';


}
bool Horse::validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo){
	if(notMove(xFrom,yFrom,xTo,yFrom)==true) return false;
	bool valid;
	int x = xTo -xFrom;
	int y = yTo - yFrom;
	if(x ==1 && y ==2){
		valid = true;
	}else if(x ==-1 && y ==2){
		valid = true;
	}else if(x ==1 && y ==-2){
		valid = true;
	}else if(x ==-1 && y ==-2){
		valid = true;
	}else if(x ==2 && y ==1){
		valid = true;
	}else if(x ==-2 && y ==1){
		valid = true;
	}else if(x ==2 && y ==-1){
		valid = true;
	}else if(x ==-2 && y ==-1){
		valid = true;
	}else{
		valid=false;
	}
	return valid;
}
