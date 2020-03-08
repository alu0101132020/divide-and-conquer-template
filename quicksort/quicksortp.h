#pragma once

#include "../framework/Problema.h"
#include "quicksorts.h"

class QuickSortP: public Problema {
public:
	QuickSortP(std::vector<int> _array);
	virtual ~QuickSortP();

	bool isCasoMinimo();
	pair<Problema*,Problema*> descomponer();
	void solver(Solucion* s);

private:
	std::vector<int> array;
};

