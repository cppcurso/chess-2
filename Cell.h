#ifndef SRC_CLASSGAME_CELL_H_
#define SRC_CLASSGAME_CELL_H_
#include "Piece.h"

class Cell {
	int x, y;
	Piece* piece;
public:
	Cell(int x, int y) : x(x), y(y), piece(nullptr) {}
	void setPiece(Piece* piece);
	int getX() const;
	int getY() const;
	bool isOccupied();
	Piece* occupiedBy();

};

#endif /* SRC_CLASSGAME_CELL_H_ */
