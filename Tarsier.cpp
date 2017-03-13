#include "Tarsier.h"
#include "Primates.h"
#include "Indices.h"
#include "Animals.h"
#include <iostream>
using namespace std;	

	//ctor with param
	Tarsier::Tarsier(int bb,int x, int y) : Primates(true,x,y){
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void Tarsier::interact(){
		cout<<"*googly eyes*"<<endl;
	}
	char Tarsier::Render() {
		return 'F';
	}
