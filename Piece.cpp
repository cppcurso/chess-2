#include <iostream>

#include "Piece.h"

using namespace std;

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
  
}

bool Piece::valid(){
  bool check=true;
  return check;
}
