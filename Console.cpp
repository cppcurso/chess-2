/*
 * Console.cpp
 *
 *  Created on: 02/03/2018
 *      Author: usuario
 */

#include "Console.h"

unsigned int Console::askPieceCell(std::string coordinate) {
	unsigned int x;
	if (coordinate == "X1") {
		std::cout << "Introduce coordenada X de la pieza: ";
		std::cin >> x;
		return x;
	} else if (coordinate == "Y1") {
		std::cout << "Introduce coordenada Y de la pieza: ";
		std::cin >> x;
		return x;
	} else if (coordinate == "X2") {
		std::cout << "Introduce coordenada X de destino: ";
		std::cin >> x;
		return x;
	} else if (coordinate == "Y2") {
		std::cout << "Introduce coordenada Y de destino: ";
		std::cin >> x;
		return x;
	}
}

void Console::showError(std::string error) {
		std::cout << "Movimiento erroneo: " << error << std::endl;
}

void Console::printSpace() {
	std::cout << "---------------------" << std::endl;
}
