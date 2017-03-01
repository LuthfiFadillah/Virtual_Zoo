#ifndef SWAN_H
#define SWAN_H
#include "Anseriformes.h"
#include "Animals.h"

class Swan:public Anseriformes{
//method
public:
	//ctor with param
	Swan(int bb);
	//destructor
	//polymorphism interaksi
	void interact();
};
#endif
