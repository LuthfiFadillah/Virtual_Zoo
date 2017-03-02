#ifndef BIGHORNSHEEP_H
#define BIGHORNSHEEP_H
#include "Artiodactyls.h"
#include "Animals.h"

class BigHornSheep:public Artiodactyls{
//method
public:
	//ctor with param
	BigHornSheep(int bb);

	//polymorphism interaksi
	void interact();
};
#endif
