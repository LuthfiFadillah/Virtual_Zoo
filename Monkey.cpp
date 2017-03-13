#include "Monkey.h"
#include "Primates.h"
#include "Indices.h"
#include "Animals.h"
#include <iostream>
using namespace std;	

	//ctor with param
	Monkey::Monkey(int bb,int x, int y) : Primates(true,x,y){
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void Monkey::interact(){
		cout<<"uuuk aaak aaak"<<endl;
	}
	char Monkey::Render() {
		return 'Y';
	}
