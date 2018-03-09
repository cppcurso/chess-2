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

void Console::showSucces(std::string succes) {
	std::cout << "Exito: " << succes << std::endl;
}

void Console::printSpace() {
	std::cout << "---------------------" << std::endl;
}

bool Console::startChess() {
	char answer;
	std::cout << "¡Bienvenido al ajedrez!" << std::endl;
	std::cout << "¿Quieres Empezar o Continuar? [E/C]: ";
	std::cin >> answer;
	if (answer == 'E') {
		return true;
	} else if (answer == 'C'){
		return false;
	} else {
		startChess();
	}

}

bool Console::outChess() {
	char answer;
	std::cout << "¿Quieres salir del juego? [S/N]: ";
	std::cin >> answer;
	if (answer == 'S') {
		std::cout << "Has salido del ajedrez" << std::endl;
		return true;
	} else if (answer == 'N') {
		return false;
	} else {
		outChess();
	}
}
