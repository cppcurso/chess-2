/*
 * Storage.h
 *
 *  Created on: 07/03/2018
 *      Author: usuario
 */

#ifndef SRC_SAVEFILE_STORAGE_H_
#define SRC_SAVEFILE_STORAGE_H_
#include <iostream>
#include <fstream>
#include "../Board.h"
using namespace std;

class Storage {
public:
	static void saveGame();
	static void loadGame();

};

#endif /* SRC_SAVEFILE_STORAGE_H_ */
