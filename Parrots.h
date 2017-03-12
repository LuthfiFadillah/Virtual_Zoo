#ifndef PARROTS_H
#define PARROTS_H
#include "Psittaciformes.h"
#include "Animal.h"
#include "Indices.h"
class Parrots:public Psittaciformes{
//method
public:
	//ctor with param
	Parrots(int bb, int x, int y);

	//polymorphism interaksi
	void interact();
	char Render();	
};
#endif
