//file Cell.h
#ifndef CELL_H
#define CELL_H
#include "Renderable.h"
#include "Indices.h"

class Cell: public Renderable {
public:
	Cell(Indices I, int type);
	//Cell(Cell& C);
	~Cell();
	//Cell& operator= (Cell& C);
	Indices GetKoordinat();
	bool IsHabitat();
	bool IsFacility();
protected:
	Indices Koordinat;
	const int Type; //0 = Habitat, 1 = Facility
};

#endif
