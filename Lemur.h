#ifndef LEMUR_H
#define LEMUR_H
#include "Primates.h"
#include "Animals.h"
#include "Indices.h"

class Lemur: public Primates{
//method
public:
	//ctor with param
	Lemur(int bb,int x,int y);
	//destructor
	//polymorphism interaksi
	void interact();
	char Render();	
};
#endif
