#ifndef SRC_KING_H_
#define SRC_KING_H_
#include <iostream>
#include "Piece.h"

class King  : public Piece {


public:
	King (bool b);
	~King();
	bool validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo);
};

#endif /* SRC_KING_H_ */
