
#include<iostream>
#include "mergesorts.h"

MergesortS::MergesortS() : Solucion::Solucion() {
}

MergesortS::~MergesortS() {
}

void MergesortS::resolver() {
	int lastElement = -1;
	bool ordenado = true;
	for (int i = 0; i < array.size(); i++) {
		std::cout << "| " << array[i] << " | ";
		if (lastElement > array[i]) {
			ordenado = false;
		}
	}
	if (ordenado) {
		std::cout << "El vector está ordenado.\n";
	} else {
		std::cout << "El vecto está desordenado.\n";
	}
	std::cout << "\n";
}

void MergesortS::mezcla(pair<Solucion*,Solucion*> subSoluciones) {
	std::vector<int> leftArray = ((MergesortS*)subSoluciones.first)->array;
	std::vector<int> rightArray = ((MergesortS*)subSoluciones.second)->array;
	array.resize(leftArray.size() + rightArray.size());
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < leftArray.size() && j < rightArray.size()) {
		if(leftArray[i] <= rightArray[j]) {
			array[k] = leftArray[i];
			i++;
		}
		else {
			array[k] = rightArray[j];
			j++;
		}
		k++;
	}
	while (i < leftArray.size()) {
		array[k] = leftArray[i];
		i++;
		k++;
	}
	while (j < rightArray.size()) {
		array[k] = rightArray[j];
		j++;
		k++;
	}
}

Solucion* MergesortS::getInstance() {
	return new MergesortS();
}

void MergesortS::setValor(std::vector<int> subarray) {
	array = subarray;
}
