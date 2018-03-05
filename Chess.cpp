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
	Console::printSpace();
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
	bool colorPiece = Board::getBoard()->getCell(x1, y1)->getPiece()->isBlack();
	bool isTurnMoveValid = Board::getBoard()->canMoveTo(Board::getBoard()->getCell(x1, y1), Board::getBoard()->getCell(x2, y2));

	if (turnNumber % 2 == 0 && colorPiece == true) {
		Console::showError("Mueven blancas, introduce nuevas coordenadas");
		Console::printSpace();
		return;
	} else if (turnNumber % 2 == 1 && colorPiece == false) {
		Console::showError("Mueven negras, introduce nuevas coordenadas");
		Console::printSpace();
		return;
	}

	if (isTurnMoveValid == false) {
		Console::showError("");
		Console::printSpace();
		return;
	}

	Board::getBoard()->move(Board::getBoard()->getCell(x1, y1),Board::getBoard()->getCell(x2, y2));
	Board::getBoard()->printBoard();
	Console::printSpace();

	turnNumber++;

	if (turnNumber == 20) {
		checkMate = true;
	}
}

void Chess::finish() {
	std::cout << "Jugador 1 ha ganado!" << '\n';
}
