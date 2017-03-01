#include "Psittaciformes.h"
#include "Animal.h"
#include "Cockatoo.h"
#include <iostream>
using namespace std;

	//ctor with param
	Cockatoo::Cockatoo(int bb): Psittaciformes() {
		set_berat(bb);
	}
	
	//polymorphism interaksi
	void Cockatoo::interact(){
		cout << "Cockatooo... Cockatooo..." << endl;
		}
