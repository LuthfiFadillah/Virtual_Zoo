#include "Lemur.h"
#include "Primates.h"
#include "Animals.h"
#include <iostream>
using namespace std;	

	//ctor with param
	Lemur::Lemur(int bb){
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void Lemur::interact(){
		cout<<"*chirps*"<<endl;
	}
