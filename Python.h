#ifndef PYTHON_H
#define PYTHON_H
#include "Squamata.h"
#include "Indices.h"
class Python: public Squamata{
//method
public:
	//ctor with param
	Python(int bb,int x, int y);
	//destructor
	//polymorphism interaksi
	void interact();
};
#endif
