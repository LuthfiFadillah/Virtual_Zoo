#include "Lion.h"
#include "Carnivora.h"
#include "Animals.h"
#include "Indices.h"
#include <iostream>
using namespace std;

//class Lion: public Carnivora {
//method

	//ctor with param
	Lion::Lion(int bb,int x, int y) : Carnivora (false,x,y) {
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void Lion::interact() {
		cout << "ROAR" << endl;
}

char Lion::Render(){
	return 'I';
}
