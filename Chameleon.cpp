#include "Chameleon.h"
#include <iostream>
#include "Indices.h"
using namespace std;

//class Chameleon: public Squamata{
//method
//public:
	//ctor with param
	Chameleon::Chameleon(int bb,int x,int y) : Squamata(false,x,y) {
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void Chameleon::interact() {
		cout << "Smisshy slimi skinny\n";
	}
