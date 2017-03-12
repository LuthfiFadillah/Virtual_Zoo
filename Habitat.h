//file : Habitat.h
#ifndef HABITAT_H
#define HABITAT_H
#include "Cell.h"
#include "Renderable.h"
#include "Indices.h"

class Habitat:public Cell{
public:
  Habitat(Indices I, int type);
	bool IsLand();
	bool IsWater();
	bool IsAir();
protected:
	const int HType; //0 = Land, 1 = Water, 2 = Air
};
#endif
