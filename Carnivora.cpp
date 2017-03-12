#include "Carnivora.h"
#include "Animals.h"
#include "Indices.h"


	//ctor
	Carnivora::Carnivora(bool kejinakan, int x, int y): Animals(2, true, false, false,kejinakan,x,y) {}
	//bergerak sesuai constrain habitat
//void move(bool water_habitat, bool land_habitat, bool air_habitat, point animal_koordinat, map);
