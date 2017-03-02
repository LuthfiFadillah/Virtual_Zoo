#include "Wolf.h"
#include "Carnivora.h"
#include "Animals.h"
#include <iostream>
using namespace std;

//class Wolf: public Carnivora {
//method

	//ctor with param
	Wolf::Wolf(int bb) {
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void Wolf::interact() {
		cout << "AUUUUUUU" << endl;
}