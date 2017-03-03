#include "Cassowary.h"
#include "Casuariformes.h"
#include "Animals.h"
#include "Indices.h"
#include <iostream>
using namespace std;

//class Casuari: public Casuariformes {
//method

	//ctor with param
	Cassowary::Cassowary(int bb, Indices I): Casuariformes(false, I) {
		cout << "\nctor cassowary\n";
		Cassowary::set_berat(bb);
		cout << I.get_absis() << "|" << I.get_ordinat() << endl;
		cout << this->get_koordinat().get_absis() << "|" << this->get_koordinat().get_ordinat() << endl;
		cout << "selesai ctor cassowary\n";
	}
	//destructor
	//polymorphism interaksi
	void Cassowary::interact() {
		cout << "I can't fly :(" << endl;
	}
