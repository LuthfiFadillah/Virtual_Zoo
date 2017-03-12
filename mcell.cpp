#include "Road.h"
#include "Park.h"
#include "Restaurant.h"
#include "Indices.h"
#include <iostream>
using namespace std;

int main () {
	Indices I1(1,1);
	Indices I2(1,2);
	Indices I3(1,3);
	Road Ro(I1);
	Park P(I2);
	Restaurant Re(I3);
	cout << endl;
	
	if (Re.IsFacility()) {
		cout << "Re is a facility, ";
	}
	if (Re.IsRestaurant()) {
		cout << "a restaurant to be precise.\n";
	}
	
	Ro.Render(); P.Render(); Re.Render();
	return 0;
}
