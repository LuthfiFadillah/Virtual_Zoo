#ifndef PRIMATES_H
#define PRIMATES_H
#include "Animals.h"
#include "Indices.h"

class Primates: public Animals{
//method
public:	
	//ctor
	Primates(bool kejinakan, int x, int y);	
	//bergerak sesuai constrain habitat
	//void move(bool water_habitat, bool land_habitat, bool air_habitat, point animal_koordinat, map);
	
};
#endif
