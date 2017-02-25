#ifndef BIGHORNSHEEP_H
#define BIGHORNSHEEP_H
#include "Artiodactyls.h"
#include "Animals.h"
class BigHornSheep:public Artiodactyls{
//method
public:
	//ctor with param
	BigHornSheep(int bb, grid koordinat);
	//copy costructor
	BigHornSheep (const BigHornSheep&);
	//destructor
	~BigHornSheep();
	//polymorphism interaksi
	void interact();


//atribut
private:

};
#endif
