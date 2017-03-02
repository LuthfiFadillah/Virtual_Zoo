#include "Meerkat.h"
#include "Carnivora.h"
#include "Animals.h"
#include <iostream>
using namespace std;

//class Meerkat: public Carnivora {
//method

	//ctor with param
	Meerkat::Meerkat(int bb) {
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void Meerkat::interact() {
		cout << "*suddenly standing*" << endl;
}