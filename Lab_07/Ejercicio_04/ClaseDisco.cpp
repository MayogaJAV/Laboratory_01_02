#include "ClaseDisco.h"
#include<iostream>
using namespace std;
ClaseDisco::ClaseDisco(string genero,string nombre_arista,int numintegrantes, int NumerosdeDiscos) {
	this->genero=genero;
	this->nombre_artista=nombre_arista;
	this->numintegrantes=numintegrantes;
	this->NumerosdeDiscos=NumerosdeDiscos;
}

ClaseDisco::~ClaseDisco() {
	
}
void ClaseDisco::mostrar_info(){
	cout<<"El grupo musical "<<nombre_artista<<" compuesto por "<<numintegrantes<<" integrantes tienen una coleccion de "<<NumerosdeDiscos<<" canciones y pertenece al genero "<<genero<<endl;
}

