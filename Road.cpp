//file Road.cpp
#include "Cell.h"
#include "Facility.h"
#include "Road.h"
#include "Indices.h"
#include <iostream>
using namespace std;

	//Road::Road(): Facility() {}
	Road::Road(Indices I): Facility(I, 0, 's') {}
	//Road::Road(Road& R): Facility(R.GetKoordinat()) {}
	Road::~Road() { cout << "ROADNYA KDTORRRR T_T" << endl; }
	//Road& Road::operator= (Road& R) {}
	char Road::Render() {
		return '-';
	}
