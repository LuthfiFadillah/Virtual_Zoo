#include "Swan.h"
#include "Indices.h"
#include <iostream>
using namespace std;


	//ctor with param
	Swan::Swan(int bb,int x, int y) : Anseriformes(false,x,y) {
		set_berat(bb);
	}
	
	//polymorphism interaksi
	void Swan::interact() {
		cout << "Qwokk Qwokk\n";
	}
