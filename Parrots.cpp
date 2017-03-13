#include "Psittaciformes.h"
#include "Animals.h"
#include "Parrots.h"
#include "Indices.h"
#include <iostream>
using namespace std;

	//ctor with param
	Parrots::Parrots(int bb,int x,int y): Psittaciformes(true,x,y) {
		set_berat(bb);
	}
	
	//polymorphism interaksi
	void Parrots::interact(){
		cout << "Anyeong.." << endl;
		}

	char Parrots::Render() {
		return 'X';
	}
