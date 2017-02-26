#include "Grid.h"
#include <iostream>
using namespace std;

Grid::Grid() : n_brs(DEFSIZE), n_kol(DEFSIZE){
  int i,j;
  b = new char* [n_brs];
  for(i=0;i<n_brs;i++){
    b[i] = new char [n_kol];
  }
  for(i=0;i<n_brs;i++){
    for(j=0;j<n_kol;j++){
      b[i][j]='Z';
    }
  }
}

Grid::Grid(int n, int m) : n_brs(n), n_kol(m){
  int i,j;
  b = new char* [n_brs];
  for(i=0;i<n_brs;i++){
    b[i] = new char [n_kol];
  }
  for(i=0;i<n_brs;i++){
    for(j=0;j<n_kol;j++){
      b[i][j]='Z';
    }
  }
}

Grid::Grid(const Matriks& m) : n_brs(m.n_brs), n_kol(m.n_kol){
  int i,j;
  b = new int* [n_brs];
  for(i=0;i<n_brs;i++){
    b[i] = new int [n_kol];
  }
  for(i=0;i<n_brs;i++){
    for(j=0;j<n_kol;j++){
      b[i][j]=m.b[i][j];
    }
  }
}

~Grid(){
  int i;
  for(i=0;i<n_brs;i++){
    delete [] b[i];
  }
    delete [] b;
}

Grid& operator= (Grid& m){
  int i,j;
  for(i=0;i<n_brs;i++){
      delete [] b[i];
  }
	delete [] b;
	b = new int* [n_brs];
	for(i=0;i<n_brs;i++){
		b[i] = new int [n_kol];
	}
	for(i=0;i<n_brs;i++){
		for(j=0;j<n_kol;j++){
			b[i][j]=m.GetData(i,j);
		}
	}
	return *this;
}

friend std::ostream& operator<<(std::ostream &os, const Grid& m){
  int i,j;
	os<<"N = "<<m.n_brs<<std::endl<<"M = "<<m.n_kol<<std::endl;
	for(i=0;i<m.n_brs;i++){
		for(j=0;j<m.n_brs;j++){
			os<<m.b[i][j];
		}
		os<<std::endl;
	}
	return os;

}

void SetData (int i, int j, char v){
  b[i][j]=v;
}

char GetData (int i, int j){
	return b[i][j];
}

int GetBrs(){
	return n_brs;
}

int GetKol(){
	return n_kol;
}
