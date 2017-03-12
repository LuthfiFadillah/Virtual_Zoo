#include "Meerkat.h"
#include "Carnivora.h"
#include "Animals.h"
#include "Indices.h"
#include <iostream>
using namespace std;

//class Meerkat: public Carnivora {
//method

	//ctor with param
	Meerkat::Meerkat(int bb, int x, int y) : Carnivora(false,x,y) {
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void Meerkat::interact() {
		cout << "*suddenly standing*" << endl;
}

char Meerkat::Render(){
	return 'M';
}
