#include "Animals.h"
#include "Indices.h"
#include <iostream>
using namespace std;

//ctor
Animals::Animals(int makan, bool land, bool water, bool air, bool kejinakan, int x, int y): Renderable(1), makanan(makan), land_animal(land), water_animal(water), air_animal(air), jinak(kejinakan) {
	Indices I(2,3);
	koordinat = I;
}

//dtor
Animals::~Animals() {
	set_berat(0);
}

//return berat badan animals
int Animals::get_berat() {
	return berat_badan;
}
	
//set berat badan animals
void Animals::set_berat(int bb) {
	berat_badan = bb;
}

//return koordinat animals
Indices Animals::get_koordinat() {
	return koordinat;
}

//set koordinat
void Animals::set_koordinat(int x, int y) {
	koordinat.set_absis(x);
	koordinat.set_ordinat(y);
}

bool Animals::IsLandAnimal() {
	return land_animal;
}
bool Animals::IsWaterAnimal() {
	return water_animal;
}
bool Animals::IsAirAnimal() {
	return air_animal;
}

bool Animals::IsJinak() {
	return jinak;
}

bool Animals::IsLivable(Cell C) {
	if (IsLandAnimal()) {
		cout << "land ";
		cout << C.GetCode() << endl;;
	}
	if (IsWaterAnimal()) {
		cout << "water ";
		cout << C.GetCode() << endl;
	}
	if (IsAirAnimal()) {
		cout << "air ";
		cout << C.GetCode() << endl;
	}
	return (
		( ((C.GetCode() == 'l') && IsLandAnimal()) || ((C.GetCode() == 'w') && IsWaterAnimal()) || ((C.GetCode() == 'a') && IsAirAnimal()) )
		);
};
