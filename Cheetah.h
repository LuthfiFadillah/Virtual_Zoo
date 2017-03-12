#ifndef CHEETAH_H
#define CHEETAH_H
#include "Carnivora.h"
#include "Animals.h"
#include "Indices.h"

class Cheetah:public Carnivora{
//method
public:
	//ctor with param
	Cheetah(int bb,int x, int y);
	//destructor
	//polymorphism interaksi
	void interact();
};
#endif
