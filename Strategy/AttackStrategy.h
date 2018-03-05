/*
 * AttackStrategy.h
 *
 *  Created on: 05/03/2018
 *      Author: usuario
 */

#ifndef SRC_STRATEGY_ATTACKSTRATEGY_H_
#define SRC_STRATEGY_ATTACKSTRATEGY_H_
#include <iostream>
#include "PawnStrategy.h"


class AttackStrategy : public PawnStrategy  {
public:
	bool validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo);
	bool attack(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo, Cell* from, Cell* to);

};

#endif /* SRC_STRATEGY_ATTACKSTRATEGY_H_ */
