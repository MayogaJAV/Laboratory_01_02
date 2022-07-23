#include "arreglo.h"
#include <iostream>
using namespace std;
Arreglo::Arreglo(){
}
Arreglo::~Arreglo(){
}
void Arreglo::llenardatos(int insertar){
	bool inserto = false;
	int tamano = sizeof(arreglo)/sizeof(arreglo[1]);
	if(tamano>=4){
		for(int i=0; i<4; i++){
			if(arreglo[i]==-322){
				arreglo[i]=insertar;
				inserto=true;
				break;
			}
		}
		if(inserto==false){
			cout << "Arreglo lleno, intente borrar algun elemento." << endl;
		}
	}
	else{
		for(int i=0; i<4; i++){
			if(arreglo[i]==-322){
				arreglo[i]=insertar;
				inserto=true;
				break;
			}
		}
		if(inserto==false){
			arreglo[tamano+1]=insertar;
		}
	}
}
void Arreglo::borrardatos(int aborrar){
	int contarbasura = 0;
	int tamano = sizeof(arreglo)/sizeof(arreglo[1]);
	for(int i=0; i<5; i++){
		if(arreglo[i]==-322){
			contarbasura++;
		}
	}
	if(tamano==0 || contarbasura>=5){
		cout << "No hay nada que eliminar" << endl;
	}
	else{
		for(int i=0; i<5; i++){
			if(arreglo[i]==aborrar){
				arreglo[i]=-322;
			}
		}
	}
}
void Arreglo::mostrardatos(){
	for(int i=0; i<5; i++){
		if(arreglo[i]!=-322){
			cout << arreglo[i] << " ";
		}
	}
	cout << endl;
}
