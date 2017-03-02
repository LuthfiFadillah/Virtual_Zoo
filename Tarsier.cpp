#include "Tarsier.h"
#include "Primates.h"
#include "Animals.h"
#include <iostream>
using namespace std;	

	//ctor with param
	Tarsier::Tarsier(int bb){
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void Tarsier::interact(){
		cout<<"*googly eyes*"<<endl;
	}
