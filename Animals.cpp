#include "Animals.h"
#include "Indices.h"
#include <iostream>
using namespace std;

//ctor
Animals::Animals(int makan, bool land, bool water, bool air, bool kejinakan, int x, int y): makanan(makan), land_animal(land), water_animal(water), air_animal(air), jinak(kejinakan) {
	cout << "\nctor animal " << endl;
	Indices I(2,3);
	koordinat = I;
	cout << I.get_absis() << "---" << I.get_ordinat() << endl;
	cout << koordinat.get_absis() << " " << koordinat.get_ordinat() << endl;
	cout << "selesai ctor" << endl;
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
