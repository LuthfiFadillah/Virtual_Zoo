#ifndef CETACEA_H
#define CETACEA_H
#include "Animals.h"
class Cetacea: public Animals{
//method
public:
	//return jenis makanan
	int get_makanan();
	//return jenis habitat
	bool get_habitat();
	//bergerak sesuai constrain habitat
	void move(point animal_koordinat, map);

protected:
	//set koordinat animals
	void set_koordinat(Grid animal_koordinat);

//atribut
private:
	//Cetacea==water_habitat
	const bool water_habitat=true;
	const bool land_habitat=false;
	const bool air_habitat=false;
	//0:Herbivore, 1: Omnivore, 2:Carnivore
	const int makanan=2;

	
};
#endif
