#ifndef SQUAMATA_H
#define SQUAMATA_H
#include "Animals.h"
#include "Indices.h"
class Squamata: public Animals{

//method
public:	
	//ctor
	Squamata(bool kejinakan, int x, int y);	
	//bergerak sesuai constrain habitat
	//void move(bool water_habitat, bool land_habitat, bool air_habitat, point animal_koordinat, map);
	
};
#endif
