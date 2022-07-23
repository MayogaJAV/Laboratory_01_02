#include<iostream>
#include "AreayPeri.h"
using namespace std;
int main(){
	float lado,lado2;
	cout<<"Ingrese el lado 1 del rectangulo: "<<endl;
	cin>>lado;
	cout<<"Ingrese el lado 1 del rectangulo: "<<endl;
	cin>>lado2;
	Rectangulo operacion=Rectangulo(lado,lado2);
	operacion.area();
	operacion.perimetro();
	return 0;
}

