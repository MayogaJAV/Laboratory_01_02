#include<iostream>
#include <ctime>
#include <vector>
#include "Nacimiento.h"
using namespace std;
int main (int argc, char *argv[]) {
	string nombre;
	int dia,mes,anio;
	cout<<"Ingrese el primer nombre de la persona: "<<endl;
	cin>>nombre;
	cout<<"Ingrese el fecha de nacimiento de "<<nombre<<" :"<<endl;
	cout<<"Dia: ";
	cin>>dia;
	cout<<endl<<"Mes:";
	cin>>mes;
	cout<<endl<<"Anio: ";
	cin>>anio;
	Nacimiento persona(nombre,dia,mes,anio);
	persona.edad();
	return 0;
}

