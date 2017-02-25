#ifndef PARROTS_H
#define PARROTS_H
#include "Psittaciformes.h"
#include "Animal.h"
class Parrots:public Psittaciformes{
//method
public:
	//ctor with param
	Parrots(int bb, grid koordinat);
	//copy costructor
	Parrots (const Dolphin&);
	//destructor
	~Parrots();
	//polymorphism interaksi
	void interact();


//atribut
private:
	
};
#endif
