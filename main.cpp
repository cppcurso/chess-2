#include <iostream>
#include "ClassGame/Cell.h"
#include "ClassGame/Board.h"
#include "ClassGame/Piece.h"

int main() {


	Board::getBoard()->initBoard();
	Board::getBoard()->printBoard();

	std::cout << "----------------------" << std::endl;

	Board::getBoard()->move(Board::getBoard()->getCell(3, 3),Board::getBoard()->getCell(1, 4));
	Board::getBoard()->printBoard();

	//Cell* c = new Cell(4,7);
	//std::cout << Board::getBoard()->isEndRow(c) << std::endl;
}
