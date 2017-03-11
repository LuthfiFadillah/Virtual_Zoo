//file Road.cpp
#include "Cell.h"
#include "Facility.h"
#include "Road.h"
#include "Indices.h"
#include <iostream>
using namespace std;

	Road::Road(): Facility() {}
	Road::Road(Indices I): Facility(I) {}
	Road::Road(Road& R): Facility(R.GetKoordinat()) {}
	Road::~Road() {}
	Road& Road::operator= (Road& R) {}
	void Road::render() {
		cout << "-";
	}
