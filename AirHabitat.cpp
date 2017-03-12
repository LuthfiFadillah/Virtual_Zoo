#include "Cell.h"
#include "Habitat.h"
#include "AirHabitat.h"
#include "Indices.h"
#include <iostream>
using namespace std;

AirHabitat::AirHabitat(Indices I) : Habitat(I,2){}
char AirHabitat::Render(){
  return 'a';
}
