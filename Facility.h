//file Facility.h
#ifndef FACILITY_H
#define FACILITY_H
#include "Cell.h"
#include "Renderable.h"
#include "Indices.h"

class Facility: public Cell {
public:
	Facility(Indices I, int type, char code);
	//Facility(Facility& C);
	~Facility();
	//Facility& operator= (Facility& F);
	//void GetKoordinat();
	bool IsRoad();
	bool IsPark();
	bool IsRestaurant();
	//virtual void render() = 0; //iya???
protected:
	const int FType; //0 = Road, 1 = Park, 2 = Restaurant
};

#endif
