#ifndef SRC_CLASSGAME_BOARD_H_
#define SRC_CLASSGAME_BOARD_H_
#include <iostream>
#include "Cell.h"
#include "Queen.h"
#include "Bishop.h"
#include "Tower.h"


class Board {
	Board() {
		for (int i = 0; i < dimension; ++i) {
			for (int j = 0; j < dimension; ++j) {
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
};

#endif /* SRC_CLASSGAME_BOARD_H_ */
