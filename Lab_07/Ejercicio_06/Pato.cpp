#include "Pato.h"
#include<iostream>
using namespace std;
Pato::Pato(int numpatas,string tipo_reproduccion,int numDedos) {
	this->numpatas=numpatas;
	this->tipo_reproduccion=tipo_reproduccion;
	this->numDedos=numDedos;
}
Pato::~Pato() {
	
}
void Pato::mostrar_info(){
	cout<<"El pato tiene "<<numpatas<<" patas, su reproduccion es "<<tipo_reproduccion<<" y tiene "<<numDedos<<" dedos en los pies."<<endl;
}

