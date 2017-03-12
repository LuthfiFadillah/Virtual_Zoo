#ifndef DOLPHIN_H
#define DOLPHIN_H
#include "Cetacea.h"
#include "Animal.h"
#include "Indices.h"

class Dolphin:public Cetacea{
//method
public:
	//ctor with param
	Dolphin(int bb,int x, int y);
	
	//polymorphism interaksi
	void interact();

	
};
#endif
