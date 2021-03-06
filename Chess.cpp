/*
 * Chess.cpp
 *
 *  Created on: 02/03/2018
 *      Author: usuario
 */

#include "Chess.h"

//unsigned int Chess::count = 0;

void Chess::start() {
	turnNumber = 0;
	checkMate = false;
	if (Console::startChess() == true) {
		Board::getBoard()->initBoard();
	} else {
		Storage::loadGame(turnNumber);
	}
	Board::getBoard()->printBoard();
	Console::printSpace();
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
		Console::showError("Movimiento no permitido");
		Console::printSpace();
		return;
	}

	lastEatenPiece = Board::getBoard()->move(Board::getBoard()->getCell(x1, y1),Board::getBoard()->getCell(x2, y2));
	if (lastEatenPiece != nullptr) {
		Console::showSucces("Te has comido una pieza");
	} else {
		Console::showSucces("Movimiento correcto");
	}


	Board::getBoard()->printBoard();
	Console::printSpace();
	turnNumber++;
	Storage::saveGame(turnNumber);
}

bool Chess::end() {
	checkMate = false;
	if (lastEatenPiece != nullptr && lastEatenPiece->getFigure() == 'K') {
		finish();
		return true;
	}
	if (Console::outChess() == true) {
		checkMate = true;
	}
	return checkMate;
}

void Chess::finish() {
	if (lastEatenPiece->isBlack() != false) {
		std::cout << "Jugador Blanco ha ganado!" << std::endl;
	} else {
		std::cout << "Jugador Negro ha ganado!" << std::endl;
	}
}
