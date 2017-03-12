#ifndef GIRAFFE_H
#define GIRAFFE_H
#include "Artiodactyls.h"
#include "Animals.h"
#include "Indices.h"

class Giraffe:public Artiodactyls{
//method
public:
	//ctor with param
	Giraffe(int bb,int x, int y);

	void interact();
};
#endif
