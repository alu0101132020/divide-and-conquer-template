#pragma once

#include "../framework/solucion.h"
#include <vector>

class MergesortS: public Solucion {
public:
	MergesortS();
	virtual ~MergesortS();

	void resolver();
	void mezcla(pair<Solucion*,Solucion*>);
	Solucion* getInstance();

	void setValor(std::vector<int>);

private:
	std::vector<int> array;

};
