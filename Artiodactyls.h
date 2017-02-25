#ifndef ARTIODACTYLS_H
#define ARTIODACTYLS_H
#include "Animals.h"
class Artiodactyls: public Animals{
//method
public:
	//return jenis makanan
	int get_makanan();
	//return jenis habitat
	bool get_habitat();
	//bergerak sesuai constrain habitat
	void move(bool water_habitat, bool land_habitat, bool air_habitat, point animal_koordinat, map);

protected:
	//set koordinat animals
	void set_koordinat(Grid animal_koordinat);

//atribut
private:
	//Anseriformes==land_habitat
	const bool water_habitat=false;
	const bool land_habitat=true;
	const bool air_habitat=false;
	//0:Herbivore, 1: Omnivore, 2:Carnivore
	const int makanan=0;
};
#endif
