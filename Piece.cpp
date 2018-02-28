#include <iostream>

#include "Piece.h"

using namespace std;

bool Piece::isBlack() {
	return black;
}

string Piece::getColour(){

  string colour;
  if (black=true){
    colour="negro";
  }else{
    colour="blanco";
  }
  return colour;
}

string Piece::getName(){
  return name;
}

void Piece::move(int x, int y){

}

void Piece::setCell(Cell* c) {
    cell = c;
}
