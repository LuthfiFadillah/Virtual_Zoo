#ifndef BELUGA_H
#define BELUGA_H
#include "Cetacea.h"
#include "Animal.h"
#include "Indices.h"

class Beluga:public Cetacea{
	
//method
public:
	//ctor with param
	Beluga(int bb, int x, int y);
	
	//polymorphism interaksi
	void interact();
	
	char Render();

};
#endif
