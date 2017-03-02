#ifndef MONKEY_H
#define MONKEY_H
#include "Primates.h"
#include "Monkey.h"

class Monkey:public Primates{
//method	
public:
	//ctor with param
	Monkey(int bb);
	//destructor
	//polymorphism interaksi
	void interact();
	
};
#endif