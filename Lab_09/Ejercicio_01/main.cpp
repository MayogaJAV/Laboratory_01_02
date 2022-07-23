//main.cpp
#include <iostream>
#include "Numero.h"
using namespace std;
int main () {
	int entero1,entero2,entero3;
	float decimal1,decimal2,decimal3;
	cout<<"Ingrese los 3 numeros enteros:"<<endl;
	cin>>entero1;
	cin>>entero2;
	cin>>entero3;
	cout<<endl;
	cout<<"Ingrese los 3 numeros decimales:"<<endl;
	cin>>decimal1;
	cin>>decimal2;
	cin>>decimal3;
	cout<<endl;
	Numero<int> Lista_numeros(entero1,entero2,entero3);
	Numero<float> Lista_numeros2(decimal1,decimal2,decimal3);
	cout<<"El numero menor entero es: "<<Lista_numeros.menor()<<endl;
	cout<<"El numero mayor entero es: "<<Lista_numeros.mayor()<<endl;
	cout<<"El numero menor decimal es: "<<Lista_numeros2.menor()<<endl;
	cout<<"El numero mayor decimal es: "<<Lista_numeros2.mayor()<<endl;
	return 0;
}

