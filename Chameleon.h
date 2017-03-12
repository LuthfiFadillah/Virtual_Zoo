#ifndef CHAMELEON_H
#define CHAMELEON_H
#include "Squamata.h"
#include "Indices.h"

class Chameleon: public Squamata{
//method
public:
	//ctor with param
	Chameleon(int bb,int x, int y);
	//destructor
	//polymorphism interaksi
	void interact();
	char Render();
};
#endif
