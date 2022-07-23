#include "Matriz.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
Matriz::Matriz(int filas,int columnas) {
	this->filas=filas;
	this->columnas=columnas;
}
Matriz::~Matriz() {	
}
void Matriz::mostrarma(int** matriz){
	cout<<"MATRIZ DE NUMEROS: "<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
void Matriz::llenarma(int** matriz){
	srand(time(NULL));
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			matriz[i][j]=1+rand()%(10-1);
		}
	}
}
void Matriz::buscarma(int numero,int** matriz){
	bool contador=false;
	int k;
	int m;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			if(numero==(matriz[i][j])){
				contador=true;
				k=i;
				m=j;
			}
		}
	}
	if(contador==true){
		cout<<"El numero "<<numero<<" si se encuentra en la matriz. "<<endl;
		cout<<"Posicion del numero "<<numero<<" : "<<endl;
		cout<<" ["<<k<<"] ["<<m<<"]"<<endl;
		mostrarma(matriz);
	}
	else{
		cout<<"El numero "<<numero<<" no se encuentra en la lista. "<<endl;
		mostrarma(matriz);
	}
}

