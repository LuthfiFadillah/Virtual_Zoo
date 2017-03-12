#include "Cage.h"
#include "Animals.h"
//#include "Habitat.h"
#include "Indices.h"
#include <iostream>
using namespace std;

	Cage::Cage() {
		
	}
	
	Cage::Cage(Indices *I,int Neff){
		Wilayah = new Indices[Neff];
		for (int i=0; i< Neff; i++) {
			Wilayah[i] = I[i];
		}
		Luas = Neff;
		BanyakHewan = 0;
		DataAnimals = new Animals*[(Neff*3)/10];
		cout << "UUUU" << endl;
	}
	
	Cage::~Cage(){
		cout << "cage1";
		delete [] Wilayah;
		cout << "cage2\n";
		delete [] DataAnimals;
		cout << "cage3";
		Luas =0;
	}
	
	bool Cage::IsHostOf(Indices I){
		bool ketemu = false;
		int i=0;
		
		while ((i<Luas) && (!(ketemu))) {
			ketemu = (I.IsEqual(Wilayah[i]));
			i++; 
		}
		
		return ketemu;
	}
	
	bool Cage::Spacious() {
		return (BanyakHewan <= (Luas*3)/10) ;
	}
	
	void Cage::AddAnimal(Animals* A){
		if (Spacious()) {
			DataAnimals[BanyakHewan] = A;
			BanyakHewan++;
		} else {
			cout<< "Penuh couyyy" << endl;
		}
	}
	
	void Cage::Inter()  {
		for (int i=0; i<BanyakHewan; i++) {
			DataAnimals[i]->interact();
		}
	}
	
	bool Cage::IsCageOf(Animals* A) {
		int i = 0;
		bool ketemu = (DataAnimals[i] == A);
		while (!ketemu && (i<BanyakHewan)) {
			ketemu = (DataAnimals[i] == A);
			i++;
		}
	}
