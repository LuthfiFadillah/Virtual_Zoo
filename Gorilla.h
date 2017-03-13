#ifndef GORILLA_H
#define GORILLA_H
#include "Primates.h"
#include "Animals.h"
#include "Indices.h"

class Gorilla:public Primates{
//method	
public:
	//ctor with param
	Gorilla(int bb,int x, int y);
	//destructor
	//polymorphism interaksi
	void interact();
	char Render();
	
};
#endif
