#ifndef ANSERIFORMES_H
#define ANSERIFORMES_H
#include "Animals.h"
#include "Indices.h"
class Anseriformes: public Animals{
//method
public:
	//ctor
	Anseriformes(bool kejinakan, int x, int y);
	//bergerak sesuai constrain habitat
	//void move(bool water_habitat, bool land_habitat, bool air_habitat, point animal_koordinat, map);
};
#endif
