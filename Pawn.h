/*
 * Pawn.h
 *
 *  Created on: 01/03/2018
 *      Author: usuario
 */


 #ifndef SRC_CLASSGAME_PAWN_H_
 #define SRC_CLASSGAME_PAWN_H_
 #include "Piece.h"
 #include "Strategy/PawnStrategy.h"
 #include "Strategy/StandardStrategy.h"
 #include "Strategy/AttackStrategy.h"

 class Pawn : public Piece {
 	PawnStrategy* strategy;
 public:
 	Pawn(bool b);
 	//~Pawn();
 	void setCells(Cell* from, Cell* to);
 	bool validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo);


 };

 #endif /* SRC_CLASSGAME_PAWN_H_ */
