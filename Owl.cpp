#include "Strigiformes.h"
#include "Animals.h"
#include "Owl.h"
#include "Indices.h"
#include <iostream>
using namespace std;

	//ctor with param
	Owl::Owl(int bb, int x, int y): Strigiformes(true, x, y) {
		set_berat(bb);
	}
	
	//polymorphism interaksi
	void Owl::interact(){
		cout << "Coccooo Coccooo" << endl;
		}

	char Owl::Render() {
		return 'Z';
	}
