#include "Cetacea.h"
#include "Animals.h"
#include "Orca.h"
#include "Indices.h"
#include <iostream>
using namespace std;

	//ctor with param
	Orca::Orca(int bb, int x, int y): Cetacea(false, x,y) {
		set_berat(bb);
	}
	
	//polymorphism interaksi
	void Orca::interact(){
		cout << "*WWUSHHHO" << endl;
		}

	char Orca::Render() {
		return '$';
	}
