//File: Zoo.cpp
#include "Zoo.h"
#include "Road.h"
#include "Park.h"
#include "Restaurant.h"
#include "WaterHabitat.h"
#include "LandHabitat.h"
#include "AirHabitat.h"
#include "Beluga.h"
#include "BigHornSheep.h"
#include "Cassowary.h"
#include "Chameleon.h"
#include "Cheetah.h"
#include "Cockatoo.h"
#include "Deer.h"
#include "Dolphin.h"
#include "Duck.h"
#include "Giraffe.h"
#include "Gorilla.h"
#include "GreatWhiteShark.h"
#include "Lemur.h"
#include "Lion.h"
#include "Meerkat.h"
#include "Monkey.h"
#include "Orca.h"
#include "Owl.h"
#include "Parrots.h"
#include "Python.h"
#include "Swan.h"
#include "Tarsier.h"
#include "Wolf.h"
#include "Indices.h"
#include <time.h>
#include <cstdio>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

	Zoo::Zoo() {
		ifstream filezoo;
		filezoo.open("map.txt", ios::in);
		//FILE *fp;
		string brs;
		int bwh=0;
		int samping=0;
		int BK=0;
		int i;
		Indices **Temp;

		if (filezoo.is_open()) {
			/*
			fp = fopen("zoo.txt", "r");
			fgets(brs,sizeof(brs),fp);
			*/

			filezoo >> brs;
			for(i=0; i<brs.length(); i++) {
				bwh = (bwh*10)+ ((int) brs[i] -48);
			}

			//fgets(brs, sizeof(brs); i++);
			filezoo >> brs;
			for (i=0; i<brs.length(); i++) {
				samping = (samping*10) + ((int) brs[i] -48);
			}

			//fgets(brs,sizeof(brs); i++);
			filezoo >> brs;
			for (i=0; i<brs.length(); i++) {
				BK = (BK*10) + ((int) brs[i] -48);
			}

			Temp = new Indices *[BK];
			for (i=0; i<BK; i++){
				Temp[i]= new Indices [25]; //constraint: maksimal habitat dalam satu cage adalah 25
			}

			lebar = bwh;
			panjang = samping;
			map = new Cell** [lebar];
			for (i=0; i<lebar; i++) {
				map[i] = new Cell* [panjang];
			}

			banyak_kandang = BK;
			int *NeffKandang;
			NeffKandang = new int [BK];
			for (i=0; i<banyak_kandang; i++) {
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
					I.SetAbsis(k);
					I.SetOrdinat(i);
					habitat = brs[j];
					if (habitat == 'W') {
						map[i][k] = new WaterHabitat(I);
					} else
					if (habitat == 'L') {
						map[i][k] = new LandHabitat(I);
					} else
					if (habitat == 'A') {
						map[i][k] = new AirHabitat(I);
					} else
					if (habitat == '-') {
						map[i][k] = new Road(I,0);
					} else
					if (habitat == '+') {
						map[i][k] = new Road(I,1);
					} else
					if (habitat == '=') {
						map[i][k] = new Road(I,2);
					} else
					if (habitat == 'P') {
						map[i][k] = new Park(I);
					} else
					if (habitat == 'R') {
						map[i][k] = new Restaurant(I);
					} else{

					}
					j++;
					k++;

					code = ((int) brs[j] -48);
					if (code != 0) {
						Temp[code-1][NeffKandang[code-1]] = I;
						NeffKandang[code-1]++;
					}

					j++;
				}
			}
			filezoo.close();
			daftar_kandang = new Cage[banyak_kandang];
			Indices *TempI;
            //TempI =  new Indices [25];
			for (i=0; i<banyak_kandang; i++) {
                TempI =  new Indices [25];
				for (int j=0; j<NeffKandang[i]; j++) {
					TempI[j] = Temp[i][j];
				}
				cout << "a";
				Cage C(TempI,NeffKandang[i]);
				cout << "b";
				cout << "b";
				cout << "b";
				daftar_kandang[i] = C;
				cout << "c";
				C.~Cage();
                delete [] TempI;
			}

			base_map = new char* [lebar];
            ready_to_print = new char *[lebar];
			for (i=0; i<lebar; i++) {
				base_map[i] = new char [panjang];
                ready_to_print[i] = new char [panjang];
			}

			for (i=0; i<lebar; i++) {
				for (int j=0; j<panjang; j++) {
					base_map[i][j] = map[i][j]->Render();
                    ready_to_print[i][j] = base_map[i][j];
				}
			}

			for (i=0; i<BK; i++){
				delete [] Temp[i];
			}
			delete [] Temp;

			Animals** PA;
			PA = new Animals* [37];
			int i = 0;
			//Cage 1
			PA[i] = new Beluga(45,2,2);
			daftar_kandang[0].AddAnimal(PA[i]);
			i++;
			PA[i] = new Dolphin(45,1,1);
			daftar_kandang[0].AddAnimal(PA[i]);
			i++;
			PA[i] = new Swan(45,0,0);
			daftar_kandang[0].AddAnimal(PA[i]);
			i++;
			//Cage 2
			PA[i] = new Cockatoo(10,19,0);
			daftar_kandang[1].AddAnimal(PA[i]);
			i++;
			PA[i] = new Cockatoo(10,8,2);
			daftar_kandang[1].AddAnimal(PA[i]);
			i++;
			PA[i] = new Parrots(10,17,0);
			daftar_kandang[1].AddAnimal(PA[i]);
			i++;
			//Cage 3
			PA[i] = new Lion(100, 1, 4);
			daftar_kandang[2].AddAnimal(PA[i]);
			i++;
			PA[i] = new Lion(100, 1, 5);
			daftar_kandang[2].AddAnimal(PA[i]);
			i++;
			//Cage 4
			PA[i] = new Cassowary(70, 6, 4);
			daftar_kandang[3].AddAnimal(PA[i]);
			i++;
			PA[i] = new Monkey(30, 6, 6);
			daftar_kandang[3].AddAnimal(PA[i]);
			i++;
			PA[i] = new Deer(60, 7, 5);
			daftar_kandang[3].AddAnimal(PA[i]);
			i++;
			PA[i] = new Lemur(30,5,7);
			daftar_kandang[3]. AddAnimal(PA[i]);
			i++;
			//Cage 5
			PA[i] = new Giraffe(100,14,4);
			daftar_kandang[4].AddAnimal(PA[i]);
			i++;
			PA[i] = new Meerkat(30, 14, 6);
			daftar_kandang[4].AddAnimal(PA[i]);
			i++;
			PA[i] = new Owl(10, 16, 4);
			daftar_kandang[4].AddAnimal(PA[i]);
			i++;
			PA[i] = new Chameleon(15, 12, 6);
			daftar_kandang[4].AddAnimal(PA[i]);
			i++;
			//Cage 6
			PA[i] = new Wolf(70, 18, 8);
			daftar_kandang[5].AddAnimal(PA[i]);
			i++;
			PA[i] = new Wolf(70, 19, 6);
			daftar_kandang[5].AddAnimal(PA[i]);
			i++;
			//Cage 7
			PA[i] = new Gorilla(100, 10, 12);
			daftar_kandang[6].AddAnimal(PA[i]);
			i++;
			PA[i] = new Duck(10, 14, 11);
			daftar_kandang[6].AddAnimal(PA[i]);
			i++;
			PA[i] = new Swan(10, 12, 12);
			daftar_kandang[6].AddAnimal(PA[i]);
			i++;
			//Cage 8
			PA[i] = new Orca(150, 5, 19);
			daftar_kandang[7].AddAnimal(PA[i]);
			i++;
			PA[i] = new Orca(150, 7, 16);
			daftar_kandang[7].AddAnimal(PA[i]);
			i++;
			//Cage 9
			PA[i] = new Python(100, 11, 18);
			daftar_kandang[8].AddAnimal(PA[i]);
			i++;
			PA[i] = new Python(100, 12, 16);
			daftar_kandang[8].AddAnimal(PA[i]);
			i++;
			PA[i] = new Python(100, 12, 19);
			daftar_kandang[8].AddAnimal(PA[i]);
			i++;

			int x;
			int y;
			for (int i = 0; i < banyak_kandang; i++) {
				for (int j = 0; j < daftar_kandang[i].GetBanyakHewan(); j++) {
					x = daftar_kandang[i].GetAnimals()[j]->GetKoordinat().GetAbsis();
					y = daftar_kandang[i].GetAnimals()[j]->GetKoordinat().GetOrdinat();
					ready_to_print[x][y] = daftar_kandang[i].GetAnimals()[j]->Render();
				}
			}
		}
	}

	Zoo::~Zoo() {
		for (int i=0; i<lebar; i++) {
			delete [] map[i];
		}
		delete [] map;
		delete [] daftar_kandang;
		for (int i=0; i<lebar; i++) {
			delete [] base_map[i];
		}
		delete [] base_map;
	}

void Zoo::Move(){
	srand(time(NULL));
    bool move;
    Indices I;
    int count,x,y,to,tox,toy;
    for (int i=0; i<banyak_kandang; i++) {
        for (int j=0; j<daftar_kandang[i].GetBanyakHewan(); j++) {
            move= false;
            count = 0;
            x = (daftar_kandang[i].GetAnimals()[j])->GetKoordinat().GetAbsis();
            y = (daftar_kandang[i].GetAnimals()[j])->GetKoordinat().GetOrdinat();
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
                if ((toy>=0) && (toy<lebar) && (tox >=0) && (tox <panjang)) {
					I.SetOrdinat(toy); I.SetAbsis(tox);
					if (((daftar_kandang[i].GetAnimals()[j])->IsLivable(*map[toy][tox])) &&
					   (daftar_kandang[i].IsHostOf(I)) &&
					   ((ready_to_print[toy][tox] == 'w') || (ready_to_print[toy][tox] == 'l') || (ready_to_print[toy][tox] == 'a'))) {
						move = true;
						(daftar_kandang[i].GetAnimals()[j])->SetKoordinat(tox, toy);
						ready_to_print[y][x] = base_map[y][x];
						ready_to_print[toy][tox] = (daftar_kandang[i].GetAnimals()[j])->Render();
					} else {
						to = (to%4) + 1;
					}
				} else {
					to = (to%4) + 1;
				}
            }
        }
    }
}
void Zoo::Print() {
    for(int i=0; i<lebar; i++) {
        for(int j=0; j<panjang; j++) {
            cout<<ready_to_print[i][j] << " ";
        }
        cout<< endl;
    }
}

void Zoo::HitungMakanan(){
    int sayur_buah_dan_biji2an=0;
    int daging=0;
    int i,j;
    for (i = 0; i<banyak_kandang; i++) {
        for (j = 0; j<daftar_kandang[i].GetBanyakHewan(); j++) {
            if (daftar_kandang[i].GetAnimals()[j]->GetMakanan() == 0) {
                sayur_buah_dan_biji2an = sayur_buah_dan_biji2an + (daftar_kandang[i].GetAnimals()[j]->GetBerat() * 3 / 100);
            } else
            if (daftar_kandang[i].GetAnimals()[j]->GetMakanan() == 1) {
                sayur_buah_dan_biji2an = sayur_buah_dan_biji2an + (daftar_kandang[i].GetAnimals()[j]->GetBerat() * 3 / 200);
                daging = daging + (daftar_kandang[i].GetAnimals()[j]->GetBerat() * 3 / 200);
            } else
            if (daftar_kandang[i].GetAnimals()[j]->GetMakanan() == 2) {
                daging = daging + (daftar_kandang[i].GetAnimals()[j]->GetBerat() * 3 / 100);
            }
        }
    }

    cout << "Butuh daging sebanyak " << daging << "kg." << endl;
    cout << "Butuh sayur, buah, dan biji-bijian sebanyak " << sayur_buah_dan_biji2an << "kg." << endl;
}

Cage* Zoo::GetKandang() {
	return daftar_kandang;
}

bool Zoo::IsInteractable(Indices I, Cage C) {
	bool iya = false;
	int i = 0;
	Indices It;
	It.SetAbsis(I.GetAbsis()+1); It.SetOrdinat(I.GetOrdinat());
	iya = (C.IsHostOf(It));
	if (!iya) {
		It.SetAbsis(I.GetAbsis()-1); It.SetOrdinat(I.GetOrdinat());
		iya = (C.IsHostOf(It));
	}
	if (!iya) {
		It.SetAbsis(I.GetAbsis()); It.SetOrdinat(I.GetOrdinat()+1);
		iya = (C.IsHostOf(It));
	}
	if (!iya) {
		It.SetAbsis(I.GetAbsis()); It.SetOrdinat(I.GetOrdinat()-1);
		iya = (C.IsHostOf(It));
	}
	return iya;
}

char** Zoo::GetPrint() {
	return ready_to_print;
}

void Zoo::Tour(){
  //i=y , j=x
	bool jalan;
	int countcage;
	Indices* ent;
	Indices* ex;
	int countentrance,countexit;
	int i,j;
	int idxentrance=0;
	int idxexit;
	int tempint = 0;
	char** map;
	countentrance = 0;
	countexit = 0;
	map = new char*[lebar];
	for(i=0;i<lebar;i++){
		map[i] = new char[panjang];
	}
	//mindahin map di zoo ke temp map
	for(i=0; i<lebar; i++) {
		for(j=0; j<panjang; j++) {
				map[i][j] = ready_to_print[i][j];
		}
	}
	//mencari entrance
	for(i=0; i<lebar; i++) {
		for(j=0; j<panjang; j++) {
			if (map[i][j] == '+') {
				countentrance++;
			}
		}
	}
	//memasukkan koordinat entrance ke array of Indices
	ent = new Indices [countentrance];
	for(i=0; i<lebar; i++) {
		for(j=0; j<panjang; j++) {
			if(map[i][j] == '+'){
				ent[tempint].SetAbsis(j);
				ent[tempint].SetOrdinat(i);
				tempint++;
			}
		}
	}
	//mencari exit
	for(i=0; i<lebar; i++) {
		for(j=0; j<panjang; j++) {
			if (map[i][j] == '=') {
				countexit++;
			}
		}
	}
	tempint = 0;
	//memasukkan koordinat exit ke array of Indices
	ex = new Indices [countexit];
	for(i=0; i<lebar; i++) {
		for(j=0; j<panjang; j++) {
			if(map[i][j] == '='){
				ex[tempint].SetAbsis(j);
				ex[tempint].SetOrdinat(i);
				tempint++;
			}
		}
	}
	//menentukan entrance secara acak
	srand((unsigned)time(NULL));
	idxentrance = rand()%countentrance;
	// membuat array of visitable
	bool** IsVisitable;
	IsVisitable = new bool* [lebar];
	for(i=0;i<lebar;i++){
		IsVisitable[i] = new bool [panjang];
	}
	for(i=0; i<lebar; i++) {
		for(j=0; j<panjang; j++) {
			if (map[i][j] == '=' || map[i][j] == '-' || map[i][j] == '+') {
			  IsVisitable[i][j] = true;
			}
			else{
				IsVisitable[i][j] = false;
			}
		}
	}
//	cout << "h" << endl;
	//touring
	int x = ent[idxentrance].GetAbsis();
	int y = ent[idxentrance].GetOrdinat();
	cout << "Anda baru saja masuk, anda berada di " << x << "," << y << endl;
	bool IsJalanAble[4];// 0 : atas, 1 : kiri, 2 : bawah, 3 : kanan
	for (i = 0; i < 4; i++) {
		IsJalanAble[i] = false;
	}
	int countjalan;
	int n;
	jalan = true;
	Indices I;
	while(jalan){
		//for(int i=0; i<lebar; i++) {
	//			for(int j=0; j<panjang; j++) {
		//				if(IsVisitable[i][j]){
			//				cout << '1';
				//		}
					//	else{
						//	cout << '0';
					//	}
					//	cout << ' ';
				//}
				//cout<< endl;
	//	}
		cout << "Anda berada di " << x << "," << y << endl;
		I.SetAbsis(x);
		I.SetOrdinat(y);
		for(n = 0; n<banyak_kandang ; n++){
			if(IsInteractable(I,daftar_kandang[n])){
				daftar_kandang[n].Inter();
			}
		}
		countjalan = 0;
		if ((y>0) && (IsVisitable[y-1][x])) {// di atas bisa jalan?
			IsJalanAble[0] = true;
			countjalan++;
		}else{ IsJalanAble[0] = false;}
		if((x>0) && IsVisitable[y][x-1]) {// di kiri bisa jalan?
			IsJalanAble[1] = true;
			countjalan++;
		}else{ IsJalanAble[1] = false;}
		if ((y<lebar-1) && IsVisitable[y+1][x]) {// di bawah bisa jalan?
			IsJalanAble[2] = true;
			countjalan++;
		}else{ IsJalanAble[2] = false;}
		if ((x < lebar-1) && IsVisitable[y][x+1]) {// di kanan bisa jalan?
			IsJalanAble[3] = true;
			countjalan++;
		}else{ IsJalanAble[3] = false;}
		if(countjalan==0){
			jalan = false;
		}
		else{
			do{
			n = rand()%4;
			}while(!IsJalanAble[n]);
			IsVisitable[y][x] = false;
			switch (n) {
				case 0: y--;break;
				case 1: x--;break;
				case 2: y++;break;
				case 3: x++;break;
				default : jalan=false;
			}
		}
	}
	//end touring
	//cek apakah berhenti di exit
	bool IsExit = false;
	int z;
	for (i = 0; i < countexit; i++) {
		if(ex[i].GetAbsis() == x && ex[i].GetOrdinat() == y){
			IsExit = true;
		}
	}
	if(IsExit){
		cout << "yeeeyeyeyyey keluar!!!" << endl;
		cout << "Anda berakhir di " << x << "," << y << endl;
	}
	else{
		cout << "noonononono kejebak!!!" << endl;
		cout << "Anda berakhir di " << x << "," << y << endl;
	}
	delete [] ent;
	delete [] ex;
	for(i=0;i<20;i++){
		delete [] map[i];
	}
	delete [] map;
	for(i=0;i<lebar;i++){
		delete [] IsVisitable[i];
	}
	delete [] IsVisitable;
}
