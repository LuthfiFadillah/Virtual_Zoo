//file Road.cpp
#include "Cell.h"
#include "Facility.h"
#include "Road.h"
#include "Indices.h"
#include <iostream>
using namespace std;

	//Road::Road(): Facility() {}
	Road::Road(Indices I, int rtype): Facility(I, 0, 's'), rtype(rtype){}
	//Road::Road(Road& R): Facility(R.GetKoordinat()) {}
	Road::~Road() {}
	//Road& Road::operator= (Road& R) {}
	char Road::Render() {
		if (rtype==0) {
			return '-';
		}
		else if (rtype==1){
			return '+';
		}
		else if (rtype==2){
			return '=';
		}
	}
