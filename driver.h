#ifndef DRIVER_H
#define DRIVER_h
#include "zoo.h"
class Driver {
public:
  /*@brief display main menu
   */
  void MainMenu();
  /*@brief display virtual zoo
   *@param integer x1, y1, x2, y2
   */
  void DisplayVirtualZoo(int x1, int y1, int x2, int y2);
  /*@brief tour
   */
  void TourVirtualZoo();
  /*@brief display makanan yang dibutuhkan
   */
  void DisplayMakanan();
private:
  Zoo z;
};
#endif