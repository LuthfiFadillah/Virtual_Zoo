#ifndef TARSIER_H
#define TARSIER_H
#include "Primates.h"
#include "Animals.h"
#include "Indices.h"

class Tarsier:public Primates{
//method
public:
	//ctor with param
	Tarsier(int bb,int x, int y);
	//destructor
	//polymorphism interaksi
	void interact();

	char Render();
};
#endif
