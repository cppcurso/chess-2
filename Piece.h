#include <iostream>
#include <string>
#include "Cell.h"
#include "Board.h"
using namespace std;

class Piece {
    Cell* cell;
protected:
  	bool black;
  	std::string color;
  	char figure;
public:
  	Piece(bool black, char f);
  	virtual ~Piece();
  	bool isBlack();
  	char getFigure() const;
  	virtual void setCell(const Cell*& cell);
  	void printPiece() const;
    string getColor();
    string getName();
    virtual void move(int x, int y);
    virtual bool valid() = 0;
    void setCell(Cell* c);
    Cell* location();
    bool isOnCell();

};
