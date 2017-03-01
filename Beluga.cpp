#include "Cetacea.h"
#include "Animal.h"
#include "Beluga.h"
#include <iostream>
using namespace std;

	//ctor with param
	Beluga::Beluga(int bb): Cetacea() {
		set_berat(bb);
	}
	
	//polymorphism interaksi
	void Beluga::interact(){
		cout << "Ooooooooooooo..." << endl;
		}
