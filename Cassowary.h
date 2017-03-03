#ifndef CASSOWARY_H
#define CASSOWARY_H
#include "Casuariformes.h"
#include "Animals.h"
#include "Indices.h"

class Cassowary: public Casuariformes {
//method
public:
	//ctor with param
	Cassowary(int bb, Indices I);
	//destructor
	//polymorphism interaksi
	void interact();
};
#endif
