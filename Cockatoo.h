#ifndef COCKATOO_H
#define COCKATOO_H
#include "Psittaciformes.h"
#include "Animal.h"
#include "Indices.h"

class Cockatoo:public Psittaciformes{
//method
public:
	//ctor with param
	Cockatoo(int bb,int x, int y);

	//polymorphism interaksi
	void interact();
	char Render();
};
#endif
