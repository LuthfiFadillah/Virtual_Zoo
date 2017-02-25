#ifndef BELUGA_H
#define BELUGA_H
#include "Cetacea.h"
#include "Animal.h"
class Beluga:public Cetacea{
//method
public:
	//ctor with param
	Beluga(int bb, grid koordinat);
	//copy costructor
	Beluga (const Dolphin&);
	//destructor
	~Beluga();
	//polymorphism interaksi
	void interact();


//atribut
private:
	
};
#endif
