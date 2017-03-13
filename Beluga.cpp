#include "Cetacea.h"
#include "Animals.h"
#include "Beluga.h"
#include "Indices.h"
#include <iostream>
using namespace std;

	//ctor with param
	Beluga::Beluga(int bb, int x, int y): Cetacea(true,x,y) {
		set_berat(bb);
	}
	
	//polymorphism interaksi
	void Beluga::interact(){
		cout << "Ooooooooooooo..." << endl;
		}
char Beluga::Render() {
 return 'B';
}
