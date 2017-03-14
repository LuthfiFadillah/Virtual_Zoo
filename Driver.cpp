#include "Driver.h"
#include <iostream>
#include "Zoo.h"
using namespace std;

//Display main menu
void Driver::MainMenu(){
  int x1, y1, x2, y2;
  int input;
  char n;
  bool keluar = false;
  while(!keluar){
    cout << "Selamat Datang Di Virtual Zoo" << endl << endl;
    cout << "Menu : " << endl;
    cout << "1. Display Virtual Zoo (Partial)" << endl;
    cout << "2. Display Virtual Zoo (Full)" << endl;
    cout << "3. Tour di Virtual Zoo" << endl;
    cout << "4. Menampilkan Banyak Makanan" << endl;
    cout << "5. Keluar" << endl << endl;

    cout << "Input : "; cin >> input;
    switch (input){
      case 1 :
          cout << "Masukkan koordinat atas-kiri"; cin >> x1 >> y1;
          cout << "Masukkan koordinat bawah-kanan"; cin >> x2 >> y2;
          cout << x1 << y1 << x2 << y2 << endl;
          DisplayVirtualZoo(x1,y1,x2,y2);
          break;
      case 3 :
          TourVirtualZoo();
          break;
      case 4 :
          DisplayMakanan();
          break;
      case 5 :
          cout << "See ya!" << endl;
          keluar = true;
          break;
      case 2 :
          do {
            Z.Move();
            Z.Print();
            cout << endl;
            cout << "Legend" << endl;
            cout << "B : Beluga     S : Big Horn Sheep     C : Cassowary     H : Chameleon     T : Cheetah" << endl;
            cout << "O : Cockatoo     D : Deer     N : Dolphin     U : Duck     G : Girrafe" << endl;
            cout << "J : Gorilla     K : Great White Shark     E : Lemur     I : Lion     M : Meerkat" << endl;
            cout << "Y : Monkey     $ : Orca     Z : Owl     X : Parrots     V : Phyton" << endl;
            cout << "Q : Swan     F : Tarsier     @ : Wolf     P : Park     R : Restaurant" << endl;
            cout << "L : Land Habitat     W : Water Habitat     A : Air Habitat     - : Road     + : Entrance" << endl;
            cout << "= : Exit" << endl << endl;
            cout << "Move? (y/n)"; cin >> n;
          } while(n=='y');
          break;
      default :
          cout << "Masukan Salah" << endl;
    }
  }
}

//Display Virtual Zoo
void Driver::DisplayVirtualZoo(int x1, int y1, int x2, int y2){
    if(x1>=x2 || y1>=y2){
      cout << "Masukan koordinat salah" << endl;
    }
    else{
      for (int i = x1; i <= x2; i++) {
        for (int j = y1; j <= y2; j++) {
          cout << Z.GetPrint()[i][j] << " ";
        }
        cout << endl;
      }
      cout << endl;
      cout << "Legend" << endl;
      cout << "B : Beluga     S : Big Horn Sheep     C : Cassowary     H : Chameleon     T : Cheetah" << endl;
      cout << "O : Cockatoo     D : Deer     N : Dolphin     U : Duck     G : Girrafe" << endl;
      cout << "J : Gorilla     K : Great White Shark     E : Lemur     I : Lion     M : Meerkat" << endl;
      cout << "Y : Monkey     $ : Orca     Z : Owl     X : Parrots     V : Phyton" << endl;
      cout << "Q : Swan     F : Tarsier     @ : Wolf     P : Park     R : Restaurant" << endl;
      cout << "L : Land Habitat     W : Water Habitat     A : Air Habitat     - : Road     + : Entrance" << endl;
      cout << "= : Exit" << endl << endl;
    }
}

//Tour
void Driver::TourVirtualZoo(){
  Z.Tour();
}

//Display makanan yang dibutuhkan
void Driver::DisplayMakanan(){
  Z.HitungMakanan();
}
