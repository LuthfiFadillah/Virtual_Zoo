#ifndef LION_H
#define LION_H
#include "Carnivora.h"
#include "Animals.h"

class Lion:public Carnivora{
//method
public:
	//ctor with param
	Lion(int bb);
	//destructor
	//polymorphism interaksi
	void interact();
	
	
};
#endif