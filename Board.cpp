#include "Board.h"

Board* Board::aBoard = nullptr;

Board* Board::getBoard() {
	if (!aBoard)
		aBoard = new Board();
	return aBoard;
}
