//file Restaurant.h
#ifndef RESTAURANT_H
#define RESTAURANT_H
#include "Cell.h"
#include "Facility.h"
#include "Indices.h"

class Restaurant: public Facility {
public:
	//Road();
	Restaurant(Indices I);
	//Road(Road& R);
	~Restaurant();
	//Road& operator= (Road& R);
	void Render();
};

#endif
