#include "Cheetah.h"
#include "Carnivora.h"
#include "Animals.h"
#include <iostream>
using namespace std;

//class Cheetah: public Carnivora {
//method

	//ctor with param
	Cheetah::Cheetah(int bb) {
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void Cheetah::interact() {
		cout << "*run fast*" << endl;
}