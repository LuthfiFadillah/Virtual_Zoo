#include "Lion.h"
#include "Carnivora.h"
#include "Animals.h"
#include <iostream>
using namespace std;

//class Lion: public Carnivora {
//method

	//ctor with param
	Lion::Lion(int bb) {
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void Lion::interact() {
		cout << "ROAR" << endl;
}