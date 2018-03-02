#include "Board.h"


Board* Board::aBoard = nullptr;

Board* Board::getBoard() {
	if (!aBoard)
		aBoard = new Board();
	return aBoard;
}

void Board::printBoard() {
		for (int i = 0; i < dimension; ++i) {
			for (int j = 0; j < dimension; ++j) {
				cells[i][j]->printCell();
			}
			std::cout <<std:: endl;
		}
}

bool Board::isEndRow(Cell* cell){
	return ((cell->getY()==0 || (cell->getY() == (dimension -1))));
}

bool Board::isEndColumn(Cell* cell){
	return ((cell->getX()==0 || (cell->getX() == (dimension -1))));
}
bool Board::isOutBoard(Cell* cell) {
	return ((cell->getX()>7 || cell->getX()<0)
			|| (cell->getY()>7 || cell->getY()<0));
}

bool Board::canMoveTo(Cell* from, Cell* to) {
	bool isPermited = false;
	if (isOutBoard(to) == true) {
		isPermited = false;
	}
	return isPermited;
}

void Board::initBoard(){
		Queen* Q = new Queen(true); //Reina negra
		cells[7][3] = new Cell(7,3);
		cells[7][3]->setPiece(Q);

		Queen* q = new Queen(false); //Reina blanca
		cells[0][3] = new Cell(7,3);
		cells[0][3]->setPiece(q);

		Bishop* B1 = new Bishop(true); //Alfil negro
		cells[7][5] = new Cell(7,5);
		cells[7][5]->setPiece(B1);

		Bishop* B2 = new Bishop(true); //Alfil negro
		cells[7][2] = new Cell(7,2);
		cells[7][2]->setPiece(B2);

		Bishop* b1 = new Bishop(false); //Alfil blanco
		cells[0][5] = new Cell(0,5);
		cells[0][5]->setPiece(b1);

		Bishop* b2 = new Bishop(false); //Alfil blanco
		cells[0][2] = new Cell(0,2);
		cells[0][2]->setPiece(b2);

		Tower* T1 = new Tower(true); //Torre negra
		cells[7][0] = new Cell(7,0);
		cells[7][0]->setPiece(T1);

		Tower* T2 = new Tower(true); //Torre negra
		cells[7][7] = new Cell(7,7);
		cells[7][7]->setPiece(T2);

		Tower* t1 = new Tower(false); //Torre blanco
		cells[0][0] = new Cell(0,0);
		cells[0][0]->setPiece(t1);

		Tower* t2 = new Tower(false); //Torre blanco
		cells[0][7] = new Cell(0,7);
		cells[0][7]->setPiece(t2);

		Pawn* p = new Pawn (false);
			for (int i = 0;  i < dimension; ++i) {
					for (int j = 0;  j < dimension; ++j) {
							cells [1][j] = new Cell (1, j);
							cells [1][j]->setPiece(p);
						}
			}
		Pawn* P = new Pawn (true);
			for (int i = 0;  i < dimension; ++i) {
				for (int j = 0;  j < dimension; ++j) {
						cells [6][j] = new Cell (6, j);
						cells [6][j]->setPiece(P);
				}
			}

		King* K = new King (true);
	cells [7][4] = new Cell (7,4);
	cells [7][4] ->setPiece(K);

	King* k = new King (false);
	cells [0][4] = new Cell (0,4);
	cells [0][4] ->setPiece(k);

	Horse* H = new Horse (true);
	cells [7][1] = new Cell (7,1);
	cells [7][1] ->setPiece(H);

	Horse* H1 = new Horse (true);
	cells [7][6] = new Cell (7,6);
	cells [7][6] ->setPiece(H1);

	Horse* h = new Horse (false);
	cells [0][1] = new Cell (0,1);
	cells [0][1] ->setPiece(h);

	Horse* h1 = new Horse (false);
	cells [0][6] = new Cell (0,6);
	cells [0][6] ->setPiece(h1);



}
