#ifndef SWAN_H
#define SWAN_H
#include "Anseriformes.h"
#include "Animals.h"
class Swan:public Anseriformes{
//method
public:
	//ctor with param
	Swan(int bb, grid koordinat);
	//copy costructor
	Swan (const Swan&);
	//destructor
	~Swan();
	//polymorphism interaksi
	void interact();


//atribut
private:

};
#endif
