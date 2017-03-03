#include "Casuariformes.h"
#include "Animals.h"
#include "Indices.h"
#include <iostream>
using namespace std;

//class Casuariformes: public Animals{

//method

	//ctor
	Casuariformes::Casuariformes(bool kejinakan, int x, int y): Animals(1, true, false, false, kejinakan, x, y) {
		cout << "ctor casuariformes\n";
		cout << this->get_koordinat().get_absis() << "," << this->get_koordinat().get_ordinat() << endl;
		cout << this->absis << "," << this->ordinat << endl;
		cout << "selesai ctor casuariformes\n";
	}
	//bergerak sesuai constrain habitat
	//void move(bool water_habitat, bool land_habitat, bool air_habitat, point animal_koordinat, map);
