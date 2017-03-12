#ifndef BIGHORNSHEEP_H
#define BIGHORNSHEEP_H
#include "Artiodactyls.h"
#include "Animals.h"
#include "Indices.h"

class BigHornSheep:public Artiodactyls{
//method
public:
	//ctor with param
	BigHornSheep(int bb,int x, int y);

	//polymorphism interaksi
	void interact();
};
#endif
