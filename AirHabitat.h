#ifndef AIRHABITAT_H
#define AIRHABITAT_H
#include "Cell.h"
#include "Habitat.h"
#include "Indices.h"

class AirHabitat:public Habitat{
public:
  AirHabitat(Indices I);
  void Render();
};
#endif
