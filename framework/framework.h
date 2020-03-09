
#ifndef FRAMEWORK_H_
#define FRAMEWORK_H_

#include <vector>
#include <utility>
#include <iostream>
#include "problema.h"
#include "solucion.h"
using namespace std;

class Framework {
public:
	Framework();
	virtual ~Framework();
	void divideyVenceras(Problema* p, Solucion* s);
};

#endif /* FRAMEWORK_H_ */
