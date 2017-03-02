#ifndef GIRAFFE_H
#define GIRAFFE_H
#include "Artiodactyls.h"
#include "Animals.h"
class Giraffe:public Artiodactyls{
//method
public:
	//ctor with param
	Giraffe(int bb);

	void interact();
};
#endif
