#pragma once

#include "../framework/solucion.h"
#include <vector>

class QuickSortS: public Solucion {
public:
	QuickSortS();
	virtual ~QuickSortS();

	void resolver();
	void mezcla(pair<Solucion*,Solucion*>);
	Solucion* getInstance();

	void setValor(std::vector<int> subarray);

private:
	std::vector<int> array;
};

