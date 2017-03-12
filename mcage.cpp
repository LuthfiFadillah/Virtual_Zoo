//file mcage.cpp
#include "Cage.h"
#include "Indices.h"
#include "Cassowary.h"
#include <iostream>
using namespace std;

int main() {
	Indices Wil[10];
	int k=0;
	Indices I;
	for (int i=0; i<2; i++) {
		for (int j=0; j<5; j++) {	
			I.set_absis(i+1); I.set_ordinat(j+1);
			Wil[k] = I;
			k++;
		}
	}
	Cage C1(Wil, 10);
	Cassowary *Pc;
	Cassowary *Pc2;
	Pc = new Cassowary(30,1,4);
	Pc2 = new Cassowary(30,0,4);
	C1.AddAnimal(Pc);
	C1.AddAnimal(Pc2);
	Indices It(1,3);
	if (C1.IsHostOf(It)) {
		cout << "Daymn we did it\n";
	} else {
		cout << "Ayo semangat...\n";
	}
	
	cout << endl;
	C1.Inter();
	
	return 0;
}
