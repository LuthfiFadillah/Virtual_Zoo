/*
#include "Python.h"
#include "Chameleon.h"
#include "GreatWhiteShark.h"
*/
#include "Animals.h"
#include "Casuariformes.h"
#include "Cassowary.h"
#include "Indices.h"
#include <iostream>
using namespace std;

int main() {
	/*
	Python P(30);
	Chameleon C(15);
	GreatWhiteShark GWS(100);
	*/
	Cassowary CS(75,2,3);
	/*
	cout << "Berat P the Python: " << P.get_berat() << endl;
	cout << "P tinggal di: " << P.get_koordinat().get_absis() << ", " << P.get_koordinat().get_ordinat() << endl;
	cout << "Berat C the Chameleon: " << C.get_berat() << endl;
	cout << "Berat GWS the GREAT WHITE SHARK HONEEYYYY: " << GWS.get_berat() << endl;
	*/
	cout << "Berat CS the Cassowary: " << CS.get_berat() << endl;
	cout << "CS tinggal di: " << (CS.get_koordinat()).get_absis() << ", " << (CS.get_koordinat()).get_ordinat() << endl;
	cout << "CS tinggal di: " << CS.get_x() << ", " << CS.get_y() << endl;
	if (CS.IsJinak()) {
		cout << "Dia jinak\n";
	} else {
		cout << "Dia tidak jinak\n";
	};
	return 0;
}
