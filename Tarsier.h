#ifndef TARSIER_H
#define TARSIER_H
#include "Primates.h"
#include "Animals.h"

class Tarsier:public Primates{
//method	
public:
	//ctor with param
	Tarsier(int bb);
	//destructor
	//polymorphism interaksi
	void interact();
	
};
#endif