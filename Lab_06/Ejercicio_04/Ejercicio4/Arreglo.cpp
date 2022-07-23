#include "Arreglo.h"
#include<iostream>
using namespace std;
Arreglo::Arreglo() {
}

Arreglo::~Arreglo() {
}
void llenadatos(int numero,int dato){
	for(int i=dato;i<tamanio;i++){
		if(i<tamanio){
			matriz[i]=numero;
			break;
		}
		else{
			cout<<"La lista esta llena. Borre los datos de la lista."<<endl;
		}
	}
}

