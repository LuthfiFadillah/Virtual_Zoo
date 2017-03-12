#ifndef DEER_H
#define DEER_H
#include "Artiodactyls.h"
#include "Animals.h"
#include "Indices.h"
class Deer:public Artiodactyls{
//method
public:
	//ctor with param
	Deer(int bb,int x, int y);

	//polymorphism interaksi
	void interact();
};
#endif
