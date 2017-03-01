#include "Python.h"
#include <iostream>
using namespace std;
//class Python: public Squamata{

	//ctor with param
	Python::Python(int bb) {
		set_berat(bb);
	}
	
	//polymorphism interaksi
	void Python::interact() {
		cout << "Ssshhh\n";
	}
