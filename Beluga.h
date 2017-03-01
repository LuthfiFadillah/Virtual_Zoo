#ifndef BELUGA_H
#define BELUGA_H
#include "Cetacea.h"
#include "Animal.h"
class Beluga:public Cetacea{
	
//method
public:
	//ctor with param
	Beluga(int bb);
	
	//polymorphism interaksi
	void interact();

};
#endif
