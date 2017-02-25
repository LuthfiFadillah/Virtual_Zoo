#ifndef ANSERIFORMES_H
#define ANSERIFORMES_H
#include "Animals.h"
class Anseriformes: public Animals{
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
	//Anseriformes==water_habitat && air_habitat
	const bool water_habitat=true;
	const bool land_habitat=false;
	const bool air_habitat=true;
	//0:Herbivore, 1: Omnivore, 2:Carnivore
	const int makanan=2;
};
#endif