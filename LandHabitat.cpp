#include "Cell.h"
#include "Habitat.h"
#include "LandHabitat.h"
#include "Indices.h"
#include <iostream>
using namespace std;

LandHabitat::LandHabitat(Indices I) : Habitat(I,0,'l'){}
char LandHabitat::Render(){
  return 'l';
}
