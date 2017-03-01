//Animals.h
#ifndef ANIMALS_H
#define ANIMALS_H
//#include "Grid.h"
class Animals{
//method
public:
	//ctor
	Animals(int makan, bool land, bool water, bool air);
	
	//dtor
	~Animals();
	
	//interaksi yang dilakukan animals
	virtual void interact() = 0;
	
	//gerakan animals
	//virtual void move() = 0;
	
	//return berat badan animals
	int get_berat();
	
	//set berat badan animals
	void set_berat(int bb);
	
	//return koordinat animals
	//Grid get_koordinat();
	
	//habitat hewan
	bool IsLandAnimal();
	bool IsWaterAnimal();
	bool IsAirAnimal();


//atribut
protected:
	int berat_badan;
	//Grid animal_koordinat;
	int makanan;
	const bool land_animal;
	const bool water_animal;
	const bool air_animal;
};

#endif
