#ifndef GORILLA_H
#define GORILLA_H
#include "Primates.h"
#include "Animals.h"

class Gorilla:public Primates{
//method	
public:
	//ctor with param
	Gorilla(int bb);
	//destructor
	//polymorphism interaksi
	void interact();
	
	
};
#endif