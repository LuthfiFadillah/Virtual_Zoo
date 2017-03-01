//Animals.h
#ifndef ANIMALS_H
#define ANIMALS_H
#include "Indices.h"
class Animals{
//method
public:
	//ctor
	Animals(int makan, bool land, bool water, bool air, int x, int y);
	
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
	Indices get_koordinat();
	
	//set koordinat
	void set_koordinat(int x, int y);
	
	//habitat hewan
	bool IsLandAnimal();
	bool IsWaterAnimal();
	bool IsAirAnimal();


//atribut
protected:
	int berat_badan;
	Indices koordinat;
	int makanan;
	const bool land_animal;
	const bool water_animal;
	const bool air_animal;
};

#endif
