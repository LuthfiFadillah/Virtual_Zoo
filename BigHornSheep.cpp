#include "Artiodactyls.h"
#include "Animals.h"
#include "BigHornSheep.h"
#include "Indices.h"
#include <iostream>
using namespace std;

	//ctor with param
	BigHornSheep::BigHornSheep(int bb,int x, int y) : Artiodactyls(false,x,y){
		set_berat(bb);
	}

	void BigHornSheep::interact(){
		cout<< "Mbeeekkkk" << endl;
	}
