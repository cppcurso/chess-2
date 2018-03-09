/*
 * Board.cpp
 *
 *  Created on: 27/02/2018
 *      Author: usuario
 */

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
		std::cout << std::endl;
	}
}

unsigned int Board::countPiece () {
	unsigned int count = 0;
	for (int i = 0; i < dimension; ++ i) {
		for ( int j = 0;  j < dimension; ++ j) {
			if (getCell(i, j)->getPiece() != nullptr) {
				count ++;
			}
		}
	}
	return count;
}

bool Board::isEndRow(Cell* cell) {
	return ((cell->getY() == 0) || (cell->getY() == (dimension -1)));
}

bool Board::isEndColumn(Cell* cell) {
	return ((cell->getX() == 0) || (cell->getX() == (dimension -1)));
}

bool Board::isOutBoard(Cell* cell) {
	return ((cell->getX()>7 || cell->getX()<0)
			|| (cell->getY()>7 || cell->getY()<0));
}

bool Board::isColumnFree(Cell* from, Cell* to) {
	if ((to->getX() - from->getX()) > 0) { //Movimiento hacia abajo
		for (int i = from->getX() + 1; i < (to->getX() - from->getX()); i++) {
			if (getCell(from->getX() + i, from->getY())->isOccupied() == true) {
				return false;
			}
		}
	} else { //Movimiento hacia arriba
		for (int i = from->getX() - 1; i < (from->getX() - to->getX()); i--) {
			if (getCell(from->getX() - i, from->getY())->isOccupied() == true) {
				return false;
			}
		}
	}
	return true;
}

bool Board::isRowFree(Cell* from, Cell* to) {
	if ((to->getY() - from->getY()) > 0) { //Movimiento hacia la derecha
		for (int i = 1; i < (to->getY() - from->getY()); i++) {
			if (getCell(from->getX(), from->getY() + i)->isOccupied() == true) {
				return false;
			}
		}
	} else { //Movimiento hacia la izquierda
		for (int i = 1; i < (from->getY() - to->getY()); i--) {
			if (getCell(from->getX(), from->getY() - i)->isOccupied() == true) {
				return false;
			}
		}
	}
	return true;
}

bool Board::isDiagonalFree(Cell* from, Cell* to) {
	if((to->getY() - from->getY())>0 && (to->getX() - from->getX())>0) {
		for(int i = 1 ; i < (to->getX() - from->getX()) ; i++) { //Comprueba si la diagonal está libre hacia la derecha y hacia abajo
			if(getCell(from->getX()+i, from->getY()+i)->isOccupied() == true) {
				return false;
			}
		}
	} else if((to->getY() - from->getY())<0 && (to->getX() - from->getX())<0) {
		for(int i = 1 ; i < (from->getX() - to->getX()) ; i++) { //Comprueba si la diagonal está libre hacia la izquierda y hacia arriba
			if(getCell(from->getX()-i, from->getY()-i)->isOccupied() == true){
				return false;
			}
		}
	} else if((to->getY() - from->getY())>0 && (to->getX() - from->getX())<0){
		for(int i = 1 ; i < (from->getX() - to->getX()) ; i++) { //Comprueba si la diagonal está libre hacia la derecha y hacia arriba
			if(getCell(from->getX()-i, from->getY()+i)->isOccupied() == true){
				return false;
			}
		}
	} else if((to->getY() - from->getY())<0 && (to->getX() - from->getX())>0){
		for(int i = 1 ; i < (to->getX() - from->getX()) ; i++) { //Comprueba si la diagonal está libre hacia la izquierda y hacia abajo
			if(getCell(from->getX()+i, from->getY()-i)->isOccupied() == true){
				return false;
			}
		}
	}
	return true;
}



Cell* Board::getCell(unsigned int x, unsigned int y) {
	return cells[x][y];
}

Piece* Board::move(Cell* from, Cell* to) {
	Piece* pieceTo = to->getPiece();
	cells[to->getX()][to->getY()]->setPiece(from->getPiece());
	cells[from->getX()][from->getY()]->setPiece(nullptr);
	return pieceTo;
}

bool Board::canMoveTo(Cell* from, Cell* to) {
	if (!from->isOccupied()) {
		Console::showError("Casilla vacia");
		return false;
	}
	if (isOutBoard(to) == true){
		Console::showError("Casilla fuera del tablero");
		return false;
	}

	if(from->getPiece()->getFigure() == 'P') {
		from->getPiece()->setCells(from, to);
	}

	bool move = from->getPiece()->validMove(from->getX(), from->getY(), to->getX(), to->getY());
	if (move == false ) {
		Console::showError("Movimiento no permitido por esta pieza");
		return false;
	}
	if (from->getPiece()->getFigure() == 'T') {
		if(from->getY()==to->getY() && !isColumnFree(from,to)){
				Console::showError("Columna no libre (piezas en la trayectoria)");
				return false;
		}
		if(from->getX()==to->getX() && !isRowFree(from,to)){
				Console::showError("Fila no libre (piezas en la trayectoria)");
				return false;
		}
	}
	if(from->getPiece()->getFigure() == 'B'){
		if(!isDiagonalFree(from,to)){
			Console::showError("Diagonal no libre (piezas en la trayectoria)");
			return false;
		}
	}
	if(from->getPiece()->getFigure() == 'Q'){
		if(from->getY()==to->getY() && !isColumnFree(from,to)){
			Console::showError("Columna no libre (piezas en la trayectoria)");
			return false;
		}
		if(from->getX()==to->getX() && !isRowFree(from,to)){
			Console::showError("Fila no libre (piezas en la trayectoria)");
			return false;
		}
		if(abs(to->getX()-from->getX())==abs(to->getY()-from->getY()) && !isDiagonalFree(from,to)){//la diferencia x y de y debe ser igual
			Console::showError("Diagonal no libre (piezas en la trayectoria)");
			return false;
		}
 	}
	return true;
}
void Board::initBoard() {
	Queen* Q = new Queen(true);
	cells[7][3] = new Cell(7,3);
	cells[7][3]->setPiece(Q);

	Queen* q = new Queen(false);
	cells[0][3] = new Cell(0,3);
	cells[0][3]->setPiece(q);

	Bishop* B1 = new Bishop(true);
	cells[7][5] = new Cell(7,5);
	cells[7][5]->setPiece(B1);

	Bishop* B2 = new Bishop(true);
	cells[7][2] = new Cell(7,2);
	cells[7][2]->setPiece(B2);

	Bishop* b1 = new Bishop(false);
	cells[0][5] = new Cell(0,5);
	cells[0][5]->setPiece(b1);

	Bishop* b2 = new Bishop(false);
	cells[0][2] = new Cell(0,2);
	cells[0][2]->setPiece(b2);

	Tower* T1 = new Tower(true);
	cells[7][0] = new Cell(7,0);
	cells[7][0]->setPiece(T1);

	Tower* T2 = new Tower(true);
	cells[7][7] = new Cell(7,7);
	cells[7][7]->setPiece(T2);

	Tower* t1 = new Tower(false);
	cells[0][0] = new Cell(0,0);
	cells[0][0]->setPiece(t1);

	Tower* t2 = new Tower(false);
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
