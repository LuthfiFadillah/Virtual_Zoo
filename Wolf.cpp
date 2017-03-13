#include "Wolf.h"
#include "Carnivora.h"
#include "Animals.h"
#include <iostream>
using namespace std;

//class Wolf: public Carnivora {
//method

	//ctor with param
	Wolf::Wolf(int bb, int x, int y): Carnivora(false, x, y) {
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void Wolf::interact() {
		cout << "AUUUUUUU" << endl;
	}
	char Wolf::Render() {
		return '@';
	}
