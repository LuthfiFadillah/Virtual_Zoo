#ifndef SWAN_H
#define SWAN_H
#include "Anseriformes.h"
#include "Animals.h"
#include "Indices.h"

class Swan:public Anseriformes{
//method
public:
	//ctor with param
	Swan(int bb,int x, int y);
	//destructor
	//polymorphism interaksi
	void interact();
	char Render();
};
#endif
