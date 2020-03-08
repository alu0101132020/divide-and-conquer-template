
#pragma once
#include "../framework/Problema.h"
#include "mergesorts.h"

class MergesortP: public Problema {
public:
	MergesortP(vector <int>);
	virtual ~MergesortP();

	bool isCasoMinimo();
	pair<Problema*,Problema*> descomponer();
	void solver(Solucion* s);

private:
	std::vector<int> array;
};
