#include "Cheetah.h"
#include "Carnivora.h"
#include "Indices.h"
#include "Animals.h"
#include <iostream>
using namespace std;

//class Cheetah: public Carnivora {
//method

	//ctor with param
	Cheetah::Cheetah(int bb,int x, int y) : Carnivora(false,x,y) {
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void Cheetah::interact() {
		cout << "*run fast*" << endl;
}
