#include "Cell.h"
#include "Habitat.h"
#include "WaterHabitat.h"
#include "Indices.h"
#include <iostream>
using namespace std;

WaterHabitat::WaterHabitat(Indices I) : Habitat(I,1,'w'){}

WaterHabitat::~WaterHabitat() {
	cout << "WATERHABITATNYA KEDTORRRR T_T" << endl;
}

char WaterHabitat::Render(){
  return 'w';
}
