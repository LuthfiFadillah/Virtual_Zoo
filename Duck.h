#ifndef DUCK_H
#define DUCK_H
#include "Anseriformes.h"
#include "Animals.h"
class Duck:public Anseriformes{
//method
public:
	//ctor with param
	Duck(int bb);

	//polymorphism interaksi
	void interact();
};
#endif
