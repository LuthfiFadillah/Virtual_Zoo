#ifndef WATERHABITAT_H
#define WATERHABITAT_H
#include "Cell.h"
#include "Habitat.h"
#include "Indices.h"

class WaterHabitat:public Habitat{
public:
  WaterHabitat(Indices I);
  ~WaterHabitat();
  char Render();
};
#endif
