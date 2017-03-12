#include "Python.h"
#include <iostream>
#include "Indices.h"
using namespace std;
//class Python: public Squamata{

	//ctor with param
	Python::Python(int bb, int x, int y) : Squamata(false,x,y) {
		set_berat(bb);
	}

	//polymorphism interaksi
	void Python::interact() {
		cout << "Ssshhh\n";
	}

	char Phyton::Render(){
		return 'V';
	}
