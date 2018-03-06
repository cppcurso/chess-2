/*
 * Pawn.cpp
 *
 *  Created on: 01/03/2018
 *      Author: usuario
 */

 #include "Pawn.h"

 Pawn::Pawn(bool b) : Piece(b) {
 	figure = 'P';
 	strategy = nullptr;
 }
 void Pawn::setCells(Cell* from, Cell* to){
 	this->from = from;
 	this->to = to;
 }

 bool Pawn::validMove(unsigned int xFrom, unsigned int yFrom, unsigned int xTo, unsigned int yTo) {

 	int cellX = xTo - xFrom;
 	int cellY = yTo - yFrom;
 	if(((cellY != 0) && (cellX !=0)) == 1) {
 		strategy = new AttackStrategy();
 		return strategy->attack(xFrom, yFrom, xTo, yTo, from, to);
 	} else {
 		strategy = new StandardStrategy();
 		return strategy->validMove(xFrom, yFrom, xTo, yTo);
 	}
 }
