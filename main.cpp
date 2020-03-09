
#ifndef MAIN_
#define MAIN_

#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include"framework/framework.h"
#include"mergesort/mergesortp.h"
#include"mergesort/mergesorts.h"
#include"quicksort/quicksortp.h"
#include"quicksort/quicksorts.h"
using namespace std;


int main(int argc, char* argv[]){
	if (argc < 2 /*&& atoi(argv[1]) < 0*/) {
        cout << "\nNúmero de parametros incorrecto. Encontrado " << argc-1 << " requerido 1."<< endl;
        exit(-1);
    } else {
	srand (time(NULL));
    std::vector<int> array(atoi(argv[1]));
    for(int i = 0; i < array.size(); i++){
      array[i] = rand() % 10000;
	  std::cout << "| " << array[i] << " | ";
    }
	Problema* problemaQ = new QuickSortP(array);
	Solucion* solucionQ = new QuickSortS();
	Framework* frameworkQ = new Framework();
	Problema* problemaM = new MergesortP(array);
	Solucion* solucionM = new MergesortS();
	Framework* frameworkM = new Framework();


	frameworkM->divideyVenceras(problemaM, solucionM);
	cout << "\nResultado:" << endl;
	solucionM->resolver();

	frameworkQ->divideyVenceras(problemaQ, solucionQ);
	cout << "\nResultado:" << endl;
	solucionQ->resolver();
	}
};

#endif /* MAIN_ */
