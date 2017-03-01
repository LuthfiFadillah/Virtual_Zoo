#include "GreatWhiteShark.h"
#include <iostream>
using namespace std;

//method
//public:
	//ctor with param
	GreatWhiteShark::GreatWhiteShark(int bb): Selacimorpha() {
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void GreatWhiteShark::interact() {
		cout << "*Big grins* heyyo" << endl;
	}
