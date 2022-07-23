#include<iostream>
#include "Persona_Herencia.h"
using namespace std;

int main () {
	string nombre;
	int edad;
	cout<<"Ingrese el nombre: "<<endl;
	cin>>nombre;
	cout<<"Ingrese la edad: "<<endl;
	cin>>edad;
	Persona_Herencia Estudiante(nombre,edad);
	Estudiante.mostrar();
	return 0;
}

