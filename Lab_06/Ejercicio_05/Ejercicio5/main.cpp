#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "Matriz.h"
using namespace std;

int main (int argc, char *argv[]) {
	int filas,columnas,numero;
	cout<<"Ingrese el numero de filas que tendra su matriz: "<<endl;
	cin>>filas;
	cout<<"Ingrese el numero de columnas que tendra su matriz: "<<endl;
	cin>>columnas;
	Matriz MATRIZ(filas,columnas);
	int** matriz=new int*[filas];
	for(int i=0;i<filas;i++){
		matriz[i]= new int[columnas];
	}
	cout<<"Indique el numero a buscar en su matriz: "<<endl;
	cin>>numero;
	MATRIZ.llenarma(matriz);
	MATRIZ.buscarma(numero,matriz);
	for(int i=0;i<filas;i++){
		delete[] matriz[i];
	}
	delete[] matriz;
	return 0;
}
