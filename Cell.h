/*
 * Cell.h
 *
 *  Created on: 27/02/2018
 *      Author: usuario
 */

#ifndef SRC_CLASSGAME_CELL_H_
#define SRC_CLASSGAME_CELL_H_
#include <iostream>
#include "Piece.h"

class Cell {
	unsigned int x, y;
	Piece* piece;
public:
	Cell(int x, int y) : x(x), y(y), piece(nullptr) {}
	void setPiece(Piece* piece);
	int getX() const;
	int getY() const;
	Piece* getPiece();
	bool isOccupied();
	Piece* occupiedBy();

	/*friend std::ostream& operator<<(std::ostream &os, const Cell& c) {
		if (c.isOccupied() == false) {
		os << "0";
		}
		return os;
	}*/
	void printCell();
};

#endif /* SRC_CLASSGAME_CELL_H_ */
