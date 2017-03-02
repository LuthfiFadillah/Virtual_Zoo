#include "Gorilla.h"
#include "Primates.h"
#include "Animals.h"
#include <iostream>
using namespace std;	

	//ctor with param
	Gorilla::Gorilla(int bb){
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void Gorilla::interact(){
		cout<<"*thump thump*"<<endl;
	}
