/*
 * Chess.h
 *
 *  Created on: 02/03/2018
 *      Author: usuario
 */

#ifndef SRC_CLASSGAME_CHESS_H_
#define SRC_CLASSGAME_CHESS_H_
#include "Game.h"
#include "Board.h"
#include "Console.h"
#include "../SaveFile/Storage.h"

class Chess : public Game {
public:
	bool checkMate;
	unsigned int turnNumber;
	Piece* lastEatenPiece;
	Chess() : Game(2) {}
	void start();
	bool end();
	void turn();
	void finish();
};

#endif /* SRC_CLASSGAME_CHESS_H_ */
