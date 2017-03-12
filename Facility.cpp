//file Facility.cpp
#include "Cell.h"
#include "Facility.h"
#include "Indices.h"

	//Facility::Facility(): Cell() {}
	Facility::Facility(Indices I, int type): Cell(I, 1), FType(type) {}
	//Facility::Facility(Facility& C): Cell(C.GetKoordinat()) {}
	Facility::~Facility() {}
	//Facility& Facility::operator= (Facility& F) {}
	//void GetKoordinat();
	bool Facility::IsRoad() { return (FType == 0); }
	bool Facility::IsPark() { return (FType == 1); }
	bool Facility::IsRestaurant() { return (FType == 2); }
