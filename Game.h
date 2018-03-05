/*
 * Game.h
 *
 *  Created on: 02/03/2018
 *      Author: usuario
 */

#ifndef SRC_CLASSGAME_GAME_H_
#define SRC_CLASSGAME_GAME_H_

class Game {
public:
	int players;
	virtual void start() = 0;
	virtual bool end() = 0;
	virtual void turn() = 0;
	virtual void finish() = 0;

	Game(int players) : players(players) {}

	void play();
};

#endif /* SRC_CLASSGAME_GAME_H_ */
