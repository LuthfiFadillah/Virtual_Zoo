#ifndef MEERKAT_H
#define MEERKAT_H
#include "Carnivora.h"
#include "Animals.h"
#include "Indices.h"

class Meerkat:public Carnivora{
//method
public:
	//ctor with param
	Meerkat(int bb,int x, int y);
	//destructor
	//polymorphism interaksi
	void interact();
	
};
#endif
