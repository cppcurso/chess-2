/*
 * Storage.cpp
 *
 *  Created on: 07/03/2018
 *      Author: usuario
 */

#include "Storage.h"

void Storage::saveGame() {
	ofstream storageFile("ChessSave.txt", ios::binary);
	unsigned int numberPieces = Board::getBoard()->countPiece();
	storageFile.write((char*) &numberPieces, sizeof(unsigned int));
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (Board::getBoard()->getCell(i, j)->getPiece() != nullptr) {
				unsigned int x = Board::getBoard()->getCell(i, j)->getX();
				storageFile.write((char*) &x, sizeof(unsigned int));
				unsigned int y = Board::getBoard()->getCell(i, j)->getY();
				storageFile.write((char*) &y, sizeof(unsigned int));
				Piece* piece = Board::getBoard()->getCell(i, j)->getPiece();
				storageFile.write((char*) piece, sizeof(Piece));
			}
		}
	}
}

void Storage::loadGame() {
	ifstream storageFile("ChessSave.txt", ios::binary);
	unsigned int numberPieces = 0;
	storageFile.read((char*) &numberPieces, sizeof(unsigned int));
	unsigned int x = 0;
	unsigned int y = 0;
	for (unsigned int i = 0; i <= numberPieces; i++) {
		storageFile.read((char*) &x, sizeof(unsigned int));
		storageFile.read((char*) &y, sizeof(unsigned int));
		Piece* p = new Pawn(true);
		storageFile.read((char*) p, sizeof(Piece));
		Board::getBoard()->getCell(x, y)->setPiece(p);
	}
}
