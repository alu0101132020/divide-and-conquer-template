
#ifndef MAIN_
#define MAIN_

#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include"framework/Framework.h"
#include"mergesort/mergesortP.h"
#include"mergesort/mergesortS.h"
#include"quicksort/quicksortp.h"
#include"quicksort/quicksorts.h"
using namespace std;


int main(int argc, char* argv[]){
	if (argc < 2) {
        cout << "\nNúmero de parametros incorrecto. Encontrado " << argc-1 << " requerido 1."<< endl;
        exit(-1);
    } else {
    std::vector<int> array(argc-1);
    for(int i = 1; i < argc; i++){
      array[i - 1] = atoi(argv[i]);
    }
	Problema* problema = new QuickSortP(array);
	Solucion* solucion = new QuickSortS();
	Framework* framework = new Framework();


	framework->divideyVenceras(problema, solucion);
	cout << "\nResultado:" << endl;
	solucion->resolver();
	}
};

#endif /* MAIN_ */
