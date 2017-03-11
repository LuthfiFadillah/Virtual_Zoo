#ifndef INDICES_H
#define INDICES_H
//#include <ostream>
//using namespace std;

class Indices {
public:
	//ctor
	Indices();
	//ctor with param
	Indices(int absis, int ordinat);
	//cctor
	Indices(Indices&);
	//dtor
	~Indices();
	//operator = 
	Indices& operator= (Indices& I);
	//getter
	int get_absis();
	int get_ordinat();
	//setter
	void set_absis(int x);
	void set_ordinat(int y);
	//cout
	//friend std::ostream& operator<<(std::ostream &os, Indices& I);
//atribut
protected:
	int x;
	int y;
};

#endif
