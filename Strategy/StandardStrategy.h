/*
 * StandarStrategy.h
 *
 *  Created on: 05/03/2018
 *      Author: usuario
 */

#ifndef SRC_STRATEGY_STANDARDSTRATEGY_H_
#define SRC_STRATEGY_STANDARDSTRATEGY_H_
#include "PawnStrategy.h"
#include <iostream>


class StandardStrategy : public PawnStrategy {
public:
	bool validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo);
	bool attack(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo, Cell* from, Cell* to);
};

#endif /* SRC_STRATEGY_STANDARDSTRATEGY_H_ */
