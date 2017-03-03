#ifndef CASUARIFORMES_H
#define CASUARIFORMES_H
#include "Animals.h"
#include "Indices.h"

class Casuariformes: public Animals{

//method
public:	
	//ctor
	Casuariformes(bool kejinakan, Indices I);
	//bergerak sesuai constrain habitat
	//void move(bool water_habitat, bool land_habitat, bool air_habitat, point animal_koordinat, map);
	
};
#endif
