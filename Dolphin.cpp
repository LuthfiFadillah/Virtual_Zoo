#include "Cetacea.h"
#include "Animal.h"
#include "Dolphin.h"
#include <iostream>
using namespace std;

	//ctor with param
	Dolphin::Dolphin(int bb): Cetacea() {
		set_berat(bb);
	}
	
	//polymorphism interaksi
	void Dolphin::interact(){
		cout << "Bermain bola? Makan dulu" << endl;
		}
