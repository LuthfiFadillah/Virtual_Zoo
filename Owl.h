#ifndef OWL_H
#define OWL_H
#include "Strigiformes.h"
#include "Animal.h"
#include "Indices.h"

class Owl:public Strigiformes{
//method
public:
	//ctor with param
	Owl(int bb, int x, int y);
	
	//polymorphism interaksi
	void interact();

};
#endif
