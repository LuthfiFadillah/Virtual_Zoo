#include "Cetacea.h"
#include "Animal.h"
#include "Orca.h"
#include <iostream>
using namespace std;

	//ctor with param
	Orca::Orca(int bb): Cetacea() {
		set_berat(bb);
	}
	
	//polymorphism interaksi
	void Orca::interact(){
		cout << "*WWUSHHH*" << endl;
		}
