#ifndef DUCK_H
#define DUCK_H
#include "Anseriformes.h"
#include "Animals.h"
#include "Indices.h"
class Duck:public Anseriformes{
//method
public:
	//ctor with param
	Duck(int bb,int x, int y);

	//polymorphism interaksi
	void interact();
	
	char Render();
};
#endif
