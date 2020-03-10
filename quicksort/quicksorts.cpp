
#include<iostream>
#include "quicksorts.h"

QuickSortS::QuickSortS() : Solucion::Solucion() {
}

QuickSortS::~QuickSortS() {
}


void QuickSortS::resolver() {
	int lastElement = -1;
	bool ordenado = true;
	for (int i = 0; i < array.size(); i++) {
		std::cout << "| " << array[i] << " | ";
		if (lastElement > array[i]) {
			ordenado = false;
		}
		lastElement = array[i];
	}
	if (ordenado) {
		std::cout << "El vector está ordenado.\n";
	} else {
		std::cout << "El vecto está desordenado.\n";
	}
	std::cout << "\n";
}

void QuickSortS::mezcla(pair<Solucion*,Solucion*> subSoluciones) {
	std::vector<int> leftArray = ((QuickSortS*)subSoluciones.first)->array;
	std::vector<int> rightArray = ((QuickSortS*)subSoluciones.second)->array;
	array.resize(leftArray.size() + rightArray.size());
	int k = 0;
	for (int i = 0; i < leftArray.size(); i++){
		array[k] = leftArray[i];
		k++;
	}
	for (int i = 0; i < rightArray.size(); i++){
		array[k] = rightArray[i];
		k++;
	}
}

Solucion* QuickSortS::getInstance() {
	return new QuickSortS();
}

void QuickSortS::setValor(std::vector<int> subarray) {
	array = subarray;
}
