#ifndef CHEETAH_H
#define CHEETAH_H
#include "Carnivora.h"
#include "Animals.h"

class Cheetah:public Carnivora{
//method
public:
	//ctor with param
	Cheetah(int bb);
	//destructor
	//polymorphism interaksi
	void interact();
};
#endif