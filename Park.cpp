//file Park.cpp
#include "Cell.h"
#include "Facility.h"
#include "Park.h"
#include "Indices.h"
#include <iostream>
using namespace std;

	//Road();
	Park::Park(Indices I): Facility(I, 1) {}
	//Road(Road& R);
	Park::~Park() {}
	//Road& operator= (Road& R);
	void Park::Render() {
		cout << "P";
	}
