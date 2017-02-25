#ifndef GIRAFFE_H
#define GIRAFFE_H
#include "Artiodactyls.h"
#include "Animals.h"
class Giraffe:public Artiodactyls{
//method
public:
	//ctor with param
	Giraffe(int bb, grid koordinat);
	//copy costructor
	Giraffe (const Giraffe&);
	//destructor
	~Giraffe();
	//polymorphism interaksi
	void interact();


//atribut
private:

};
#endif
