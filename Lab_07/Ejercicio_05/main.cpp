#include<iostream>
#include "OperacionFactorial.h"
using namespace std;

int main (int argc, char *argv[]) {
	int numero;
	cout<<"Ingrese un numero: "<<endl;
	cin>>numero;
	OperacionFactorial operacion;
	operacion.setfactorial(numero);
	cout<<operacion.getfactorial()<<"! es: "<<operacion.devolverfactorial(numero)<<endl;
	return 0;
}

