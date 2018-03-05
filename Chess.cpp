/*
 * Chess.cpp
 *
 *  Created on: 02/03/2018
 *      Author: usuario
 */

#include "Chess.h"

//unsigned int Chess::count = 0;

void Chess::start() {
	Board::getBoard()->initBoard();
	Board::getBoard()->printBoard();
	turnNumber = 0;
	checkMate = false;
}

bool Chess::end() {
	bool checkMate = false;
	return checkMate;
}

void Chess::turn() {
	unsigned int x1 = Console::askPieceCell("X1");
	unsigned int y1 = Console::askPieceCell("Y1");
	unsigned int x2 = Console::askPieceCell("X2");
	unsigned int y2 = Console::askPieceCell("Y2");

	if (turnNumber % 2 == 0) {
		Board::getBoard()->move(Board::getBoard()->getCell(x1, y1),Board::getBoard()->getCell(x2, y2));
		Board::getBoard()->printBoard();
	} else {
		Board::getBoard()->move(Board::getBoard()->getCell(x1, y1),Board::getBoard()->getCell(x2, y2));
		Board::getBoard()->printBoard();
	}
	turnNumber++;

	if (turnNumber == 20) {
		checkMate = true;
	}
}

void Chess::finish() {
	std::cout << "Jugador 1 ha ganado!" << '\n';
}
