//file : Habitat.cpp
#include "Cell.h"
#include "Habitat.h"
#include "Indices.h"

Habitat::Habitat(Indices I, int type, char code) : Cell(I, 0, code), HType(type) {}
bool Habitat::IsLand(){ return HType == 0;}
bool Habitat::IsWater(){ return HType == 1;}
bool Habitat::IsAir(){ return HType == 2;}
