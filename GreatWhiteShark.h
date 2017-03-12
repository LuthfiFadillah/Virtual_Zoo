#ifndef GREATWHITESHARK_H
#define GREATWHITESHARK_H
#include "Selacimorpha.h"
#include "Indices.h"

class GreatWhiteShark: public Selacimorpha {

//method
public:
	//ctor with param
	GreatWhiteShark(int bb,int x, int y);
	//destructor
	//polymorphism interaksi
	void interact();
};
#endif
