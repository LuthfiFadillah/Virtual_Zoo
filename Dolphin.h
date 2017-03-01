#ifndef DOLPHIN_H
#define DOLPHIN_H
#include "Cetacea.h"
#include "Animal.h"
class Dolphin:public Cetacea{
//method
public:
	//ctor with param
	Dolphin(int bb);
	
	//polymorphism interaksi
	void interact();

	
};
#endif
