//File: Zoo.cpp
#include "Zoo.h"
#include "Road.h"
#include "Park.h"
#include "Restaurant.h"
#include "WaterHabitat.h"
#include "LandHabitat.h"
#include "AirHabitat.h"
#include "Beluga.h"
#include "Cassowary.h"
#include "Indices.h"
#include <cstdio>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

	Zoo::Zoo() {
		
		cout << "a";
		ifstream filezoo;
		filezoo.open("/Users/aliviaprht/Desktop/Virtual_Zoo/Virtual_Zoo/map.txt", ios::in);
		//FILE *fp;
		string brs;
		int bwh=0;
		int samping=0;
		int BK=0;
		int i;
		Indices **Temp;
		
		if (filezoo.is_open()) {
			cout << "b";
			/*
			fp = fopen("zoo.txt", "r");
			fgets(brs,sizeof(brs),fp);
			*/
			
			filezoo >> brs;
			for(i=0; i<brs.length(); i++) {
				bwh = (bwh*10)+ ((int) brs[i] -48); 
			}
			
			cout << "c";
			
			//fgets(brs, sizeof(brs); i++);
			filezoo >> brs;
			for (i=0; i<brs.length(); i++) {
				samping = (samping*10) + ((int) brs[i] -48);
			}
			
			cout << "d";
			
			//fgets(brs,sizeof(brs); i++);
			filezoo >> brs;
			for (i=0; i<brs.length(); i++) {
				BK = (BK*10) + ((int) brs[i] -48);
			}
			
			cout << "e";
			
			Temp = new Indices *[BK];
			cout << "e1";
			for (i=0; i<BK; i++){
				cout << "e2";
				Temp[i]= new Indices [25]; //constraint: maksimal habitat dalam satu cage adalah 25
				cout << "e3";
			}
			
			cout << "f";
			
			Lebar = bwh;
			Panjang = samping;
			Map = new Cell** [Lebar];
			for (i=0; i<Lebar; i++) {
				Map[i] = new Cell* [Panjang];
			}
		
			BykKandang = BK;
			int *NeffKandang;
			NeffKandang = new int [BK];
			for (i=0; i<BykKandang; i++) {
				NeffKandang[i] = 0;
			}
			char habitat;
			int code;
		
			Indices I(0,0);
			for (int i=0; i<bwh; i++) {
				//fgets(brs, sizeof(brs),fp);
				filezoo >> brs;
				int j=0;
				int k=0;
				while (j<samping*2) {
					cout << "\n";
					I.set_absis(k);
					I.set_ordinat(i);
					habitat = brs[j];
					if (habitat == 'W') {
						Map[i][k] = new WaterHabitat(I); 
						cout << "Dtor Indices? ";
					} else
					if (habitat == 'L') {
						Map[i][k] = new LandHabitat(I); 
						cout << "Dtor Indices? ";
					} else
					if (habitat == 'A') {
						Map[i][k] = new AirHabitat(I); 
						cout << "Dtor Indices? ";
					} else
					if (habitat == '-') {
						Map[i][k] = new Road(I); 
						cout << "Dtor Indices? ";
					} else
					if (habitat == '+') {
						Map[i][k] = new Road(I); 
						cout << "Dtor Indices? ";
					} else
					if (habitat == '=') {
						Map[i][k] = new Road(I);
						cout << "Dtor Indices? ";
					} else
					if (habitat == 'P') {
						Map[i][k] = new Park(I);
						cout << "Dtor Indices? ";
					} else
					if (habitat == 'R') {
						Map[i][k] = new Restaurant(I); 
						cout << "Dtor Indices? ";
					} else{
						
					}
					j++;
					k++;
					cout << "Yak kedtor\n";
				
					code = ((int) brs[j] -48);
					if (code != 0) {
						Temp[code-1][NeffKandang[code-1]] = I;
						NeffKandang[code-1]++;
					}
				
					j++;
				}
			}
			filezoo.close();
			DaftarKandang = new Cage[BykKandang];
			Indices *TempI;
            //TempI =  new Indices [25];
			for (i=0; i<BykKandang; i++) {
                TempI =  new Indices [25];
				for (int j=0; j<NeffKandang[i]; j++) {
					TempI[j] = Temp[i][j];
				}
				Cage C(TempI,NeffKandang[i]);
				DaftarKandang[i] = C;
                delete [] TempI;
			}
			ReadyToPrint = new char* [Lebar];
            ToBePrinted = new char *[Lebar];
			for (i=0; i<Lebar; i++) {
				ReadyToPrint[i] = new char [Panjang];
                ToBePrinted[i] = new char [Panjang];
			}
		
			cout << "Coy\n";
		
			for (i=0; i<Lebar; i++) {
				for (int j=0; j<Panjang; j++) {
					ReadyToPrint[i][j] = Map[i][j]->Render();
                    ToBePrinted[i][j] = ReadyToPrint[i][j];
				}
				cout << endl;
			}
		}
		cout << "\nDone\n";
        
        Animals *A1;
        A1 = new Beluga(45,1,1);
        DaftarKandang[0].AddAnimal(A1);
        ReadyToPrint[1][1]= A1->Render();
	}
	
	Zoo::~Zoo() {
		cout << "\nmap\n";
		for (int i=0; i<Lebar; i++) {
			delete [] Map[i];
		}
		delete [] Map;
		cout << "\ndaftar kandang\n";
		//delete [] DaftarKandang;
		cout << "\nreadytoprint\n";
		for (int i=0; i<Lebar; i++) {
			delete [] ReadyToPrint[i];
		}
		delete [] ReadyToPrint;
	}

void Zoo::Move(){
    bool move;
    int count,x,y,to,tox,toy;
    for (int i=0; i<BykKandang; i++) {
        for (int j=0; j<DaftarKandang[i].GetBanyakHewan(); i++) {
            move= false;
            count = 0;
            x = (DaftarKandang[i].GetAnimals()[j])->get_koordinat().get_absis();
            y = (DaftarKandang[i].GetAnimals()[j])->get_koordinat().get_ordinat();
            to = (rand() % 3) +1;
            while ((!(move)) && (count<4)){
                tox = x; toy = y;
                count++;
                switch (to)
                {
                    case 1 : {tox++;}; break;
                    case 2 : {toy++;}; break;
                    case 3 : {tox--;}; break;
                    case 4 : {toy--;}; break;
                    
                }
                if ((DaftarKandang[i].GetAnimals()[j])->IsLivable(*Map[toy][tox])) {
                    move = true;
                    (DaftarKandang[i].GetAnimals()[j])->set_koordinat(tox, toy);
                    ReadyToPrint[y][x] = ToBePrinted[y][x];
                    ReadyToPrint[toy][tox] = (DaftarKandang[i].GetAnimals()[j])->Render();
                } else {
                    to = (to%4) + 1;
                }
            }
            /*
            cout << "a" << endl;
            if ((DaftarKandang[i].GetAnimals()[j])->IsLivable(*Map[y+1][x])) {
                cout << "kanan";
                (DaftarKandang[i].GetAnimals()[j])->set_koordinat(y+1, x);
                ReadyToPrint[x][y] = ToBePrinted[x][y];
                ReadyToPrint[x][y+1] = (DaftarKandang[i].GetAnimals()[j])->Render();
            } else
                if ((DaftarKandang[i].GetAnimals()[j])->IsLivable(*Map[y-1][x])) {
                    cout << "kiri" << endl;
                    (DaftarKandang[i].GetAnimals()[j])->set_koordinat(y-1, x);
                    ReadyToPrint[x][y] = ToBePrinted[x][y];
                    ReadyToPrint[x][y-1] = (DaftarKandang[i].GetAnimals()[j])->Render();
                } else
                    if ((DaftarKandang[i].GetAnimals()[j])->IsLivable(*Map[y][x-1])) {
                        (DaftarKandang[i].GetAnimals()[j])->set_koordinat(y, x-1);
                        ReadyToPrint[x][y] = ToBePrinted[x][y];
                        ReadyToPrint[x-1][y] = (DaftarKandang[i].GetAnimals()[j])->Render();
                    } else
                        if ((DaftarKandang[i].GetAnimals()[j])->IsLivable(*Map[y][x+1])) {
                            (DaftarKandang[i].GetAnimals()[j])->set_koordinat(y, x+1);
                            ReadyToPrint[x][y] = ToBePrinted[x][y];
                            ReadyToPrint[x+1][y] = (DaftarKandang[i].GetAnimals()[j])->Render();
                        }*/
        
        }
    }
}
void Zoo::Print(){
    for(int i=0; i<Lebar; i++) {
        for(int j=0; j<Panjang; j++) {
            cout<<ReadyToPrint[i][j] << " ";
        }
        cout<< endl;
    }
}
