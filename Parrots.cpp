#include "Psittaciformes.h"
#include "Animal.h"
#include "Parrots.h"
#include "Indices.h"
#include <iostream>
using namespace std;

	//ctor with param
	Parrots::Parrots(int bb,intx,int y): Psittaciformes(true,x,y) {
		set_berat(bb);
	}
	
	//polymorphism interaksi
	void Parrots::interact(){
		cout << "Anyeong.." << endl;
		}
