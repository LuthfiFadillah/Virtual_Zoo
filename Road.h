//file Road.h
#ifndef ROAD_H
#define ROAD_H
#include "Cell.h"
#include "Facility.h"
#include "Indices.h"

class Road: public Facility {
public:
	//Road();
	Road(Indices I, int rtype);
	//Road(Road& R);
	~Road();
	//Road& operator= (Road& R);
	char Render();
private:
	int rtype; // 0 : biasa, 1 : entrance, 2 : exit
};

#endif
