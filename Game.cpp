/*
 * Game.cpp
 *
 *  Created on: 02/03/2018
 *      Author: usuario
 */

#include "Game.h"

void Game::play() {
	start();
	do {
		turn();
	}
	while (!end());
}
