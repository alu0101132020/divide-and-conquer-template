
#include "mergesortp.h"

MergesortP::MergesortP(vector<int> n) : Problema::Problema() {
	array = n;
}

MergesortP::~MergesortP() {

}

bool MergesortP::isCasoMinimo() {
	return (array.size() < 2);
}

pair<Problema*,Problema*> MergesortP::descomponer() {
	pair<Problema*,Problema*> subProblemas;
	std::vector<int> arrayAux1;
	std::vector<int> arrayAux2;
  	for(int i = 0; i < array.size() / 2; i++){
    	arrayAux1.push_back(array[i]);
  	}
  	for(int i = array.size() / 2; i < array.size(); i++){
    	arrayAux2.push_back(array[i]);
  	}
    subProblemas.first = new MergesortP(arrayAux1);
    subProblemas.second = new MergesortP(arrayAux2);
	return subProblemas;
}

void MergesortP::solver(Solucion* s) {
	((MergesortS*)s)->setValor(array);
}
