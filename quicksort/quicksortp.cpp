
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
	int leftIter = 1;
	int rightIter = array.size() - 1;
	int pivot = array[0];
	while (leftIter <= rightIter) {
		while (array[rightIter] > pivot) {
			rightIter--;
		}
		while (array[leftIter] < pivot) {
			leftIter++;
		}
		if(leftIter <= rightIter) {
		int aux = array[leftIter];
		array[leftIter] = array[rightIter];
		array[rightIter] = aux;
		rightIter--;
		leftIter++;
		}
	}
	int aux = array[0];
	array[0] = array[rightIter];
	array[rightIter] = aux;
	pair<Problema*,Problema*> subProblemas;
	std::vector<int> arrayAux1;
	std::vector<int> arrayAux2;
	for(int i = 0; i < rightIter; i++){
    	arrayAux1.push_back(array[i]);
  	}
  	for(int i = rightIter + 1; i < array.size(); i++){
    	arrayAux2.push_back(array[i]);
  	}
	subProblemas.first = new QuickSortP(arrayAux1);
    subProblemas.second = new QuickSortP(arrayAux2);
	return subProblemas;
}

void QuickSortP::solver(Solucion* s) {
	((QuickSortS*)s)->setValor(array);
}