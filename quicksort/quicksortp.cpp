
#include "quicksortp.h"

QuickSortP::QuickSortP(std::vector<int> n) : Problema::Problema() {
	array = n;
}

QuickSortP::~QuickSortP() {

}

bool QuickSortP::isCasoMinimo() {
	return (array.size() < 2);
}

pair<Problema*,Problema*> QuickSortP::descomponer() {
	int pivot = array[array.size()/2 - 1];
	int leftIter = 0;
	int rightIter = array.size() - 1;
	while (rightIter > leftIter) {
		while (array[rightIter] > pivot) {
			rightIter--;
		}
		while (array[leftIter] < pivot) {
			leftIter++;
		}
		int aux = array[leftIter];
		array[leftIter] = array[rightIter];
		array[rightIter] = aux;
		rightIter--;
		leftIter++;
	}
	pair<Problema*,Problema*> subProblemas;
	std::vector<int> arrayAux1;
	std::vector<int> arrayAux2;
	for(int i = 0; i < array.size() / 2; i++){
    	arrayAux1.push_back(array[i]);
  	}
  	for(int i = array.size() / 2; i < array.size(); i++){
    	arrayAux2.push_back(array[i]);
  	}
	subProblemas.first = new QuickSortP(arrayAux1);
    subProblemas.second = new QuickSortP(arrayAux2);
	return subProblemas;

}

void QuickSortP::solver(Solucion* s) {
	((QuickSortS*)s)->setValor(array);
}