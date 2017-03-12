#include "Indices.h"
#include <iostream>
using namespace std;

	//ctor
	Indices::Indices() {
		x=0;
		y=0;
	}
	
	//ctor with param
	Indices::Indices(int absis, int ordinat) {
		Indices::x = absis; Indices::y = ordinat;
	}
	
	//cctor
	Indices::Indices(Indices& I) {
		x = I.get_absis();
		y = I.get_ordinat();
	}
	//dtor
	Indices::~Indices() {
		cout << "tes";
		x = 0; y = 0;
		cout << "tes lagi\n";
	}
	//operator = 
	Indices& Indices::operator= (Indices& I) {
		Indices::x = I.x;
		Indices::y = I.y;
		return *this;
	}
	//getter
	int Indices::get_absis() {
		return x;
	}
	int Indices::get_ordinat() {
		return y;
	}
	//setter
	void Indices::set_absis(int absis) {
		//cout << absis << endl;
		x = absis;
		//cout<<x<<"lalal"<<endl;
	}
	void Indices::set_ordinat(int ordinat) {
		y = ordinat;
	}
	
	bool Indices::IsEqual(const Indices& I){
		return ((I.x == x) && (I.y == y));
	}
	//cout
	/*
	std::ostream& operator<<(std::ostream &os, Indices& I) {
		cout << "Absis: " << I.get_absis() << endl;
		cout << "Ordinat: " << I.get_ordinat() << endl;
	}
	*/
