//file Facility.cpp
#include "Cell.h"
#include "Facility.h"
#include "Indices.h"

	Facility::Facility(): Cell() {}
	Facility::Facility(Indices I): Cell(I) {}
	Facility::Facility(Facility& C): Cell(C.GetKoordinat()) {}
	Facility::~Facility() {}
	Facility& Facility::operator= (Facility& F) {}
	//void GetKoordinat();
	bool Facility::IsRoad() { return FType == 1; }
	bool Facility::IsPark() { return FType == 2; }
	bool Facility::IsRestaurant() { return FType == 3; }
