#include "Board.h"

Board* Board::aBoard = nullptr;

Board* Board::getBoard() {
	if (!aBoard)
		aBoard = new Board();
	return aBoard;
}

void Board::printBoard(){
	for (int i = 0; i < dimension; ++i) {
		for (int j = 0; j < dimension; ++j) {
			cells[i][j]->printCell();

		}
		cout << endl;

	}

}
