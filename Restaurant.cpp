//file Restaurant.cpp
#include "Cell.h"
#include "Facility.h"
#include "Restaurant.h"
#include "Indices.h"
#include <iostream>
using namespace std;

	//Road();
	Restaurant::Restaurant(Indices I): Facility(I, 2) {}
	//Road(Road& R);
	Restaurant::~Restaurant() {}
	//Road& operator= (Road& R);
	char Restaurant::Render() {
		return 'R';
	}
