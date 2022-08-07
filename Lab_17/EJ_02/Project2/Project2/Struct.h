//Struct.h
#pragma once
#include <iostream>
template <typename Tipo>
class Ordenacion {
public:
	Ordenacion() {}
	~Ordenacion(){}
	void Insertar(Tipo lista[], int lon, Tipo numero);
};
template <typename Tipo>
void Ordenacion<Tipo>::Insertar(Tipo lista[], int lon, Tipo numero) {
	lista[lon] = numero;
}
