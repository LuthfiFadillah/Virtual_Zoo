#include "Psittaciformes.h"
#include "Animal.h"
#include "Parrots.h"
#include <iostream>
using namespace std;

	//ctor with param
	Parrots::Parrots(int bb): Cetacea() {
		set_berat(bb);
	}
	
	//polymorphism interaksi
	void Parrots::interact(){
		cout << "Anyeong.." << endl;
		}
