#include "Lemur.h"
#include "Primates.h"
#include "Animals.h"
#include "Indices.h"
#include <iostream>
using namespace std;

	//ctor with param
	Lemur::Lemur(int bb, int x, int y) : Primates (false,x,y){
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void Lemur::interact(){
		cout<<"*chirps*"<<endl;
	}

	char Lemur::Render(){
		return 'E';
	}
