/*
 * Board.h
 *
 *  Created on: 27/02/2018
 *      Author: usuario
 */

#ifndef SRC_CLASSGAME_BOARD_H_
#define SRC_CLASSGAME_BOARD_H_
#include <iostream>
#include "Cell.h"
#include "Queen.h"
#include "Bishop.h"
#include "Tower.h"
#include "Pawn.h"
#include "King.h"
#include "Horse.h"
#include "Console.h"

class Board {
	Board() {
		for (int i = 0; i < dimension; i++) {
			for (int j = 0; j < dimension; j++) {
				cells[i][j] = new Cell(i, j);
			}
		}
	}
	static Board* aBoard;
	static const int dimension = 8;
	Cell* cells[dimension][dimension];
public:
	static Board* getBoard(); //Devuelve el tablero
	void printBoard();
	void initBoard();
	bool isEndRow(Cell* cell);
	bool isEndColumn(Cell* cell);
	bool isOutBoard(Cell* cell);
	void move(Cell* from, Cell* to);
	bool canMoveTo(Cell* from, Cell* to);
	Cell* getCell(unsigned int x, unsigned int y);
};

#endif /* SRC_CLASSGAME_BOARD_H_ */
