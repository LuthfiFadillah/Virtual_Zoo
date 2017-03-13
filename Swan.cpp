#include "Swan.h"
#include "Indices.h"
#include <iostream>
using namespace std;


	//ctor with param
	Swan::Swan(int bb,int x, int y) : Anseriformes(true,x,y) {
		set_berat(bb);
	}
	
	//polymorphism interaksi
	void Swan::interact() {
		cout << "Qwokk Qwokk\n";
	}

	char Swan::Render() {
		return 'Q';
	}
