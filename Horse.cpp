#include "Horse.h"

Horse::Horse (bool b) : Piece (b) {
	figure = 'h';


}
bool Horse::validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo){
	bool valid;
	if((xTo - xFrom) ==1 && (yTo - yFrom) ==2){
		valid = true;
	}else if((xTo - xFrom) ==-1 && (yTo - yFrom) ==2){
		valid = true;
	}else if((xTo - xFrom) ==1 && (yTo - yFrom) ==-2){
		valid = true;
	}else if((xTo - xFrom) ==-1 && (yTo - yFrom) ==-2){
		valid = true;
	}else if((xTo - xFrom) ==2 && (yTo - yFrom) ==1){
		valid = true;
	}else if((xTo - xFrom) ==-2 && (yTo - yFrom) ==1){
		valid = true;
	}else if((xTo - xFrom) ==2 && (yTo - yFrom) ==-1){
		valid = true;
	}else if((xTo - xFrom) ==-2 && (yTo - yFrom) ==-1){
		valid = true;
	}else{
		valid=false;
	}
	return valid;
}
