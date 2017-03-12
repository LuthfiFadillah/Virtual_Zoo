#ifndef MONKEY_H
#define MONKEY_H
#include "Primates.h"
#include "Monkey.h"
#include "Indices.h"

class Monkey:public Primates{
//method
public:
	//ctor with param
	Monkey(int bb,int x, int y);
	//destructor
	//polymorphism interaksi
	void interact();
	char Render();	
};
#endif
