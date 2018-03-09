/*
 * Console.h
 *
 *  Created on: 02/03/2018
 *      Author: usuario
 */

#ifndef SRC_CLASSGAME_CONSOLE_H_
#define SRC_CLASSGAME_CONSOLE_H_
#include <iostream>

class Console {
public:
	static unsigned int askPieceCell(std::string coordinate);
	static void showError(std::string error);
	static void showSucces(std::string succes);
	static void printSpace();
	static bool startChess();
	static bool outChess();
};

#endif /* SRC_CLASSGAME_CONSOLE_H_ */
