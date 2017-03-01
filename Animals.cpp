#include "Animals.h"

//ctor
Animals::Animals(int makan, bool land, bool water, bool air): makanan(makan), land_animal(land), water_animal(water), air_animal(air) {}

//dtor
Animals::~Animals() {
	set_berat(0);
}
	
//return berat badan animals
int Animals::get_berat() {
	return berat_badan;
}
	
//set berat badan animals
void Animals::set_berat(int bb) {
	berat_badan = bb;
}

//return koordinat animals
/*
Grid Animals::get_koordinat() {
	return animal_koordinat;
}
*/

bool Animals::IsLandAnimal() {
	return land_animal;
}
bool Animals::IsWaterAnimal() {
	return water_animal;
}
bool Animals::IsAirAnimal() {
	return air_animal;
}
