#include "Cetacea.h"
#include "Animals.h"
#include "Dolphin.h"
#include "Indices.h"
#include <iostream>
using namespace std;

	//ctor with param
	Dolphin::Dolphin(int bb,int x, int y): Cetacea(true,x,y) {
		set_berat(bb);
	}
	
	//polymorphism interaksi
	void Dolphin::interact(){
		cout << "Bermain bola? Makan dulu" << endl;
		}

	char Dolphin::Render() {
		return 'N';
	}
