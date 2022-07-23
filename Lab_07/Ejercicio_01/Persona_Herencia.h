#ifndef PERSONA_HERENCIA_H
#define PERSONA_HERENCIA_H
#include<iostream>
#include "Persona.h"
using namespace std;
class Persona_Herencia: public Persona {
public:
	Persona_Herencia(string ,int );
	~Persona_Herencia();
	void mostrar();
};
#endif

