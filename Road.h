//file Road.h
#ifndef ROAD_H
#define ROAD_H
#include "Cell.h"
#include "Facility.h"
#include "Indices.h"

class Road: public Facility {
public:
	Road();
	Road(Indices I);
	Road(Road& R);
	~Road();
	Road& operator= (Road& R);
	void render();
};

#endif
