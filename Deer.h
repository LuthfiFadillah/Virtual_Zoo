#ifndef DEER_H
#define DEER_H
#include "Artiodactyls.h"
#include "Animals.h"
class Deer:public Artiodactyls{
//method
public:
	//ctor with param
	Deer(int bb);

	//polymorphism interaksi
	void interact();
};
#endif
