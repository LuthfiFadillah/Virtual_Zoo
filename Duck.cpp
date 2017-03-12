#include "Duck.h"
#include "Indices.h"
#include <iostream>
using namespace std;


	//ctor with param
	Duck::Duck(int bb,int x, int y) :Anseriformes(false,x,y) {
		set_berat(bb);
	}
	
	//polymorphism interaksi
	void Duck::interact() {
		cout << "Qwekk Qwekk\n";
	}
