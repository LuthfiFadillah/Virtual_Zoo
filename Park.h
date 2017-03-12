//file Park.h
#ifndef PARK_H
#define PARK_H
#include "Cell.h"
#include "Facility.h"
#include "Indices.h"

class Park: public Facility {
public:
	//Road();
	Park(Indices I);
	//Road(Road& R);
	~Park();
	//Road& operator= (Road& R);
	char Render();
};

#endif
