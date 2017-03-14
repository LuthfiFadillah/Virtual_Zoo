#ifndef DRIVER_H
#define DRIVER_h
#include "Zoo.h"

class Driver{
  public:
    //Display main menu
    void Main_Menu();
    //Display Virtual Zoo
    void Display_Virtual_Zoo(int x1, int y1, int x2, int y2);
    //Tour
    void Tour_Virtual_Zoo();
    //Display makanan yang dibutuhkan
    void Display_Makanan();
  private:
    Zoo Z;
};

#endif
