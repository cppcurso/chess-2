/*
 * PawnStrategy.h
 *
 *  Created on: 05/03/2018
 *      Author: usuario
 */

#ifndef SRC_STRATEGY_PAWNSTRATEGY_H_
#define SRC_STRATEGY_PAWNSTRATEGY_H_
#include "../Piece.h"
#include "../Cell.h"

class PawnStrategy {
public:
	virtual bool validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo)=0;
	virtual bool attack(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo, Cell* from, Cell* to)= 0;

};

#endif /* SRC_STRATEGY_PAWNSTRATEGY_H_ */
