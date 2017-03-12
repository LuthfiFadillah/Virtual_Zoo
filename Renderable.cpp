//file Renderable.h
#include "Renderable.h"

	//char Renderable::Render() = 0;
	Renderable::Renderable(int t): ty(t) {}
	bool Renderable::IsCell() {
		return (ty == 0);
	}
	bool Renderable::IsAnimal() {
		return (ty == 1);
	}
