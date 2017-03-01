#include "Strigiformes.h"
#include "Animal.h"
#include "Owl.h"
#include <iostream>
using namespace std;

	//ctor with param
	Owl::Owl(int bb): Strigiformes() {
		set_berat(bb);
	}
	
	//polymorphism interaksi
	void Owl::interact(){
		cout << "Coccooo Coccooo" << endl;
		}
