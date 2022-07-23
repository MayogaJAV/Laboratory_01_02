#include<iostream>
#include <string>
#include "Alumno.h"
using namespace std;
int main(){
	string nombre;
	string primernombre,apellidopaterno,apellidomaterno;
	int cui;
	int promedio;
	cout<<"Ingrese el primer nombre del alumno: "<<endl;
	cin>>nombre;
	cout<<"Ingrese el apellido paterno: "<<endl;
	cin>>apellidopaterno;
	cout<<"Ingrese el apellido materno: "<<endl;
	cin>>apellidomaterno;
	cout<<"Ingrese el CUI del estudiante: "<<endl;
	cin>>cui;
	cout<<"Ingrese la notas del estudiante: "<<endl;
	float notas[3];
	for(int i=0;i<3;i++){
		cout<<"Ingrese la nota "<<i+1<<" : "<<endl;
		cin>>notas[i];
	}
	Alumno estudiante(nombre,cui,notas[0],notas[1],notas[2]);
	promedio=estudiante.promedio();
	estudiante.aprobar(promedio,apellidopaterno,apellidomaterno);
	return 0;
}

