#ifndef LION_H
#define LION_H
#include "Carnivora.h"
#include "Animals.h"
#include "Indices.h"

class Lion:public Carnivora{
//method
public:
	//ctor with param
	Lion(int bb, int x, int y);
	//destructor
	//polymorphism interaksi
	void interact();
	char Render();
	
};
#endif
