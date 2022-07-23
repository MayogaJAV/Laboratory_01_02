#include "Persona_Herencia.h"
#include<iostream>
using namespace std;
Persona_Herencia::Persona_Herencia(string nombre, int edad) {
	this->nombre=nombre;
	this->edad=edad;
}

Persona_Herencia::~Persona_Herencia() {
}

void Persona_Herencia::mostrar(){
	cout<<nombre<<" tiene "<<edad<<"."<<endl;
}
