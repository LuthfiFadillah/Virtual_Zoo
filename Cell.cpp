//file Cell.cpp
#include "Cell.h"
#include "Indices.h"

	Cell::Cell(Indices I, int type): Type(type) { Koordinat = I; }
	//Cell::Cell(Cell& C) { Koordinat = C.GetKoordinat(); }
	Cell::~Cell() {}
	//Cell& Cell::operator= (Cell& C) { Koordi}
	Indices Cell::GetKoordinat() { return Koordinat; }
	bool Cell::IsHabitat() { return (Type == 0); }
	bool Cell::IsFacility() { return (Type == 1); }
