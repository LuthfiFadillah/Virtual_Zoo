//file Renderable.h
#ifndef RENDERABLE_H
#define RENDERABLE_H

class Renderable {
public:
	Renderable(int t);
	virtual char Render() = 0;
	bool IsCell();
	bool IsAnimal();
	
//protected: ada nggak? Si Indices taro di sini atau Cell yak
	const int ty; //0 = cell, 1 = animal
};

#endif
