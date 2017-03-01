#include "Cassowary.h"
#include "Casuariformes.h"
#include "Animals.h"
#include <iostream>
using namespace std;

//class Casuari: public Casuariformes {
//method

	//ctor with param
	Cassowary::Cassowary(int bb) {
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void Cassowary::interact() {
		cout << "I can't fly :(" << endl;
	}
