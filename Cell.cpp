//file Cell.cpp
#include "Cell.h"
#include "Indices.h"

	Cell::Cell(Indices I, int type, char code): Renderable(0), Type(type), Code(code) { Koordinat = I; }
	//Cell::Cell(Cell& C) { Koordinat = C.GetKoordinat(); }
	Cell::~Cell() {}
	//Cell& Cell::operator= (Cell& C) { Koordi}
	char Cell::Render() { return '.'; }
	Indices Cell::GetKoordinat() { return Koordinat; }
	bool Cell::IsHabitat() { return (Type == 0); }
	bool Cell::IsFacility() { return (Type == 1); }
	char Cell::GetCode() { return Code; }
