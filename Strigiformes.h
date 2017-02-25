#ifndef STRIGIFORMES_H
#define STRIGIFORMES_H
#include "Animal.h"
class Strigiformes : public Animals {
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
	//Strigiformes==air_habitat
	const bool water_habitat=true;
	const bool land_habitat=false;
	const bool air_habitat=false;
	//0:Herbivore, 1: Omnivore, 2:Carnivore
	const int makanan=1;
};
#endif
