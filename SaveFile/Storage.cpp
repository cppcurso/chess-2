/*
 * Storage.cpp
 *
 *  Created on: 07/03/2018
 *      Author: usuario
 */

#include "Storage.h"

void Storage::saveGame() {
	Piece* piece;
	ofstream storageFile("ChessSave.txt", ios::binary);
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			piece = Board::getBoard()->getCell(i, j)->getPiece();
			storageFile.write((char*) piece, sizeof(Piece));
		}
	}
}
