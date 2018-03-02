#ifndef SRC_HORSE_H_
#define SRC_HORSE_H_

#include <iostream>
#include "Piece.h"

class Horse  : public Piece {


public:
	Horse(bool b);
	~Horse();
	bool validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo);
};

#endif /* SRC_HORSE_H_ */
