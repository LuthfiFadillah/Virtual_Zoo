//file mcage.cpp
#include "Cage.h"
#include "Indices.h"

int main() {
	Wil Indices[10];
	k=0;
	Indices I;
	for (i=0; i<2; i++) {
		for (j=0; j<5; j++) {	
			I.set_absis(i+1); I.set_ordinat(j+1);
			Wil[k] = I;
		}
	}
	Cage C1(Wil, 10);
	return 0;
}
