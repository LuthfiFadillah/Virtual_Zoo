#include "Artiodactyls.h"
#include "Animals.h"
#include "Deer.h"
#include "Indices.h"
#include <iostream>
using namespace std;

	//ctor with param
	Deer::Deer(int bb,int x, int y): Artiodactyls(false,x,y){
		set_berat(bb);
	}

	void Deer::interact(){
		cout<< "Do you know where is santa house??" << endl;
	}

	char Deer::Render(){
		return 'D';
	}
