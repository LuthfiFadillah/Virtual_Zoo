#ifndef COCKATOO_H
#define COCKATOO_H
#include "Psittaciformes.h"
#include "Animal.h"
class Cockatoo:public Psittaciformes{
//method
public:
	//ctor with param
	Cockatoo (int bb, grid koordinat);
	//copy costructor
	Cockatoo (const Dolphin&);
	//destructor
	~Cockatoo();
	//polymorphism interaksi
	void interact();


//atribut
private:
	
};
#endif
