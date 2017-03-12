#ifndef ORCA_H
#define ORCA_H
#include "Cetacea.h"
#include "Animal.h"
#include "Indices.h"

class Beluga:public Cetacea{
//method
public:
	//ctor with param
	Orca(int bb, int x, int y);
	
	//polymorphism interaksi
	void interact();

};
#endif
