//file : Habitat.cpp
#include "Cell.h"
#include "Habitat.h"
#include "Indices.h"

Habitat::Habitat(Indices I, int type) : Cell(I, 0), HType(type) {}
bool Habitat::IsLand(){ return HType == 0;}
bool Habitat::IsWater(){ return HType == 1;}
bool Habitat::IsAir(){ return HType == 2;}
