//file Cell.h
#ifndef CELL_H
#define CELL_H
#include "Indices.h"

class Cell {
public:
	Cell();
	Cell(Indices I);
	//Cell(Cell& C);
	~Cell();
	Cell& operator= (Cell& C);
	Indices GetKoordinat();
	bool IsHabitat();
	bool IsFacility();
	virtual void render(); //iya???
protected:
	 Indices Koordinat;
	int Type; //0 = Habitat, 1 = Facility
};

#endif
