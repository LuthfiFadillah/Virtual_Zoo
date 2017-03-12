//file: Zoo.h
#ifndef ZOO_H
#define ZOO_H
#include "Cell.h"
#include "Cage.h"

class Zoo {
public:
	Zoo();
	~Zoo();

private:
	Cell* **Map;
	Cage *DaftarKandang;
	int Lebar;
	int Panjang;
	int BykKandang;
	char **ReadyToPrint;
	int DEFSIZE=20;
};

#endif
