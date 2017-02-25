#ifndef DEER_H
#define DEER_H
#include "Artiodactyls.h"
#include "Animals.h"
class Deer:public Artiodactyls{
//method
public:
	//ctor with param
	Deer(int bb, grid koordinat);
	//copy costructor
	Deer (const Deer&);
	//destructor
	~Deer();
	//polymorphism interaksi
	void interact();


//atribut
private:

};
#endif
