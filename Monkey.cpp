#include "Monkey.h"
#include "Primates.h"
#include "Animals.h"
#include <iostream>
using namespace std;	

	//ctor with param
	Monkey::Monkey(int bb){
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void Monkey::interact(){
		cout<<"uuuk aaak aaak"<<endl;
	}
