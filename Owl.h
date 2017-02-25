#ifndef OWL_H
#define OWL_H
#include "Strigiformes.h"
#include "Animal.h"
class Owl:public Strigiformes{
//method
public:
	//ctor with param
	Owl(int bb, grid koordinat);
	//copy costructor
	Owl (const Dolphin&);
	//destructor
	~Owl();
	//polymorphism interaksi
	void interact();


//atribut
private:
	
};
#endif
