#include "Cassowary.h"
#include "Casuariformes.h"
#include "Animals.h"
#include <iostream>
using namespace std;

//class Casuari: public Casuariformes {
//method

	//ctor with param
	Cassowary::Cassowary(int bb, int x, int y) {
		Cassowary::set_berat(bb);
		Cassowary::set_koordinat(x, y);
	}
	//destructor
	//polymorphism interaksi
	void Cassowary::interact() {
		cout << "I can't fly :(" << endl;
	}
