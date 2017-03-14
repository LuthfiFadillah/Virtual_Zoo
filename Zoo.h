//file: Zoo.h
#ifndef ZOO_H
#define ZOO_H
#include "Cell.h"
#include "Cage.h"

class Zoo {
public:
	Zoo();
	~Zoo();
    void Move();
    void Print();
    void HitungMakanan();
    bool IsInteractable(Indices I, Cage C);
    Cage* GetKandang();
		char** GetPrint();
		void Tour();

private:
	Cell* **map;
	Cage *daftar_kandang;
	int lebar;
	int panjang;
	int banyak_kandang;
    char **ready_to_print;
	char **base_map;
	int DEFSIZE=20;
};

#endif
