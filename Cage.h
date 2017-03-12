//file Cage.h
#ifndef CAGE_H
#define CAGE_H

#include "Animals.h"
//#include "Habitat.h"
#include "Indices.h"

class Cage {
public:
	Cage();
	Cage(Indices *I, int Neff);
	~Cage();
	bool IsHostOf(Indices I);
	bool Spacious();
	void AddAnimal(Animals* A);
	void Inter();
	bool IsCageOf(Animals* A);
	
private:
	Indices* Wilayah;
	Animals** DataAnimals;
	int Luas;
	int BanyakHewan;
	
};

#endif
