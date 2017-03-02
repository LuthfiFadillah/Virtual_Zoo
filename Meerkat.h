#ifndef MEERKAT_H
#define MEERKAT_H
#include "Carnivora.h"
#include "Animals.h"

class Meerkat:public Carnivora{
//method
public:
	//ctor with param
	Meerkat(int bb);
	//destructor
	//polymorphism interaksi
	void interact();
	
};
#endif