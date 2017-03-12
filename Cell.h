//file Cell.h
#ifndef CELL_H
#define CELL_H
#include "Renderable.h"
#include "Indices.h"

class Cell: public Renderable {
public:
	Cell(Indices I, int type, char code);
	//Cell(Cell& C);
	~Cell();
	//Cell& operator= (Cell& C);
	char Render();
	Indices GetKoordinat();
	bool IsHabitat();
	bool IsFacility();
	char GetCode();
	
protected:
	Indices Koordinat;
	const int Type; //0 = Habitat, 1 = Facility
	const char Code; // '
};

#endif
