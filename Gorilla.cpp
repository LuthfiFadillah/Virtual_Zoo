#include "Gorilla.h"
#include "Primates.h"
#include "Animals.h"
#include "Indices.h"
#include <iostream>
using namespace std;	

	//ctor with param
	Gorilla::Gorilla(int bb, int x, int y) : Primates(true,x,y){
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void Gorilla::interact(){
		cout<<"*thump thump*"<<endl;
	}

	char Gorilla::Render() {
		return 'J';
	}
