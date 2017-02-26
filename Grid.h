#ifndef GRID_H
#define GRID_H
#define DEFSIZE 100

#include <iostream>

class Grid {
  public:
    Grid();

    // ctor dengan param n (banyaknya baris) dan m (banyaknya kolom)
    // Seluruh elemen matriks diinisialisasi dengan nilai 0
    Grid(int n, int m);

    // cctor
    Grid(const Matriks& m);

    // dtor
    ~Grid();

    // operator= menjamin tidak bitwise copy.
    // dan dapat melakukan assignment m1=m2; prekondisi: ukuran m1=ukuran m2
    Grid& operator= (Grid& m);

    friend std::ostream& operator<<(std::ostream &os, const Grid& m);

    // isikan nilai v di posisi data[i,j], i dan j terdefinisi
    void SetData (int i, int j, char v);

    // ambil elemen v di posisi data[i,j], i dan j terdefinisi
    char GetData (int i, int j);

    // Mengembalikan n_brs
    int GetBrs();

    // Mengembalikan n_kol
    int GetKol();

  protected:
    const int n_brs; // Banyaknya baris, n_brs > 0
    const int n_kol; // Banyaknya kolom, n_kol > 0
    int ** b; // Elemen matriks
}
