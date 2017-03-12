#include "Cell.h"
#include "Habitat.h"
#include "WaterHabitat.h"
#include "Indices.h"
#include <iostream>
using namespace std;

WaterHabitat::WaterHabitat(Indices I) : Habitat(I,1){}
void WaterHabitat::Render(){
  cout << "w";
}
