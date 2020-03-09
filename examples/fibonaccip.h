
#ifndef FIBONACCIP_H_
#define FIBONACCIP_H_

#include "../framework/problema.h"
#include "fibonaccis.h"
class FibonacciP: public Problema {
public:
	FibonacciP(int);
	virtual ~FibonacciP();

	bool isCasoMinimo();
	pair<Problema*,Problema*> descomponer();
	void solver(Solucion* s);

private:
	int _n;
};

#endif /* FIBONACCIP_H_ */
