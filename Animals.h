#ifndef ANIMALS_H
#define ANIMALS_H
class Animals{
//method
public:
	//interaksi yang dilakukan animals
	virtual void interact();
	//gerakan animals
	virtual void move();
	//return berat badan animals
	int get_berat();
	//set berat badan animals
	void set_berat(int bb);
	//return koordinat animals
	Grid get_koordinat();


//atribut
protected:
	int berat_badan;
	Grid animal_koordinat;
};
#endif