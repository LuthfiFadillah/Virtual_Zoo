#ifndef LANDHABITAT_H
#define LANDHABITAT_H
#include "Cell.h"
#include "Habitat.h"
#include "Indices.h"

class LandHabitat:public Habitat{
public:
  LandHabitat(Indices I);
  char Render();
};
#endif
