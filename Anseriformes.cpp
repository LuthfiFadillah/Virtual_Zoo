#include "Anseriformes.h"
#include "Animals.h"
#include "Indices.h"

//method

	//ctor
	Anseriformes::Anseriformes(bool kejinakan, int x, int y): Animals(1, false, true, false,kejinakan, x,y) {}
	//bergerak sesuai constrain habitat
	//void move(bool water_habitat, bool land_habitat, bool air_habitat, point animal_koordinat, map);
