#ifndef LEMUR_H
#define LEMUR_H
#include "Primates.h"
#include "Animals.h"

class Lemur: public Primates{
//method	
public:
	//ctor with param
	Lemur(int bb);
	//destructor
	//polymorphism interaksi
	void interact();
	
};
#endif