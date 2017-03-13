#include "Artiodactyls.h"
#include "Animals.h"
#include "Giraffe.h"
#include "Indices.h"
#include <iostream>
using namespace std;

	//ctor with param
	Giraffe::Giraffe(int bb, int x, int y): Artiodactyls(true,x,y){
		set_berat(bb);
	}

	void Giraffe::interact(){
		cout<< "where are u? i cant see you! are you down there?? please come up!" << endl;
	}
	
	char Giraffe::Render() {
		return 'G';
	}
