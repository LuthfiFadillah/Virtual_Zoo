#ifndef DRIVER_H
#define DRIVER_h
#include "Zoo.h"

class Driver{
  public:
    //Display main menu
    void MainMenu();
    //Display Virtual Zoo
    void DisplayVirtualZoo(int x1, int y1, int x2, int y2);
    //Tour
    void TourVirtualZoo();
    //Display makanan yang dibutuhkan
    void DisplayMakanan();
  private:
    Zoo Z;
};

#endif