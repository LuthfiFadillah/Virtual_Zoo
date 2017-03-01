#ifndef ORCA_H
#define ORCA_H
#include "Cetacea.h"
#include "Animal.h"
class Beluga:public Cetacea{
//method
public:
	//ctor with param
	Orca(int bb);
	
	//polymorphism interaksi
	void interact();

};
#endif
