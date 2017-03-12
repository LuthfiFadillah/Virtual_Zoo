#include "GreatWhiteShark.h"
#include "Indices.h"
#include <iostream>
using namespace std;

//method
//public:
	//ctor with param
	GreatWhiteShark::GreatWhiteShark(int bb, int x, int y): Selacimorpha(false,x,y) {
		set_berat(bb);
	}
	//destructor
	//polymorphism interaksi
	void GreatWhiteShark::interact() {
		cout << "*Big grins* heyyo" << endl;
	}

	char GreatWhiteShark::Render(){
		return 'K';
	}
