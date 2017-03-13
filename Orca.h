#ifndef ORCA_H
#define ORCA_H
#include "Cetacea.h"
#include "Animals.h"
#include "Indices.h"

class Orca: public Cetacea{
//method
public:
	//ctor with param
	Orca(int bb, int x, int y);
	
	//polymorphism interaksi
	void interact();
	char Render();
};
#endif
