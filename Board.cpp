#include "Board.h"
#include "Queen.h"

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
		std::cout <<std:: endl;

	}

}

void Board::initBoard(){
	Queen* q = new Queen (true);
	cells [7][3] = new Cell (7,3);
	cells [7][3] ->setPiece(q);

}
