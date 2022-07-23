#include "Ganso.h"
#include<iostream>
using namespace std;
Ganso::Ganso(int numpatas,string tipo_reproduccion,int numDedos) {
	this->numpatas=numpatas;
	this->tipo_reproduccion=tipo_reproduccion;
	this->numDedos=numDedos;
}

Ganso::~Ganso() {
	
}
void Ganso::mostrar_info(){
	cout<<"El ganso tiene "<<numpatas<<" patas, su reproduccion es "<<tipo_reproduccion<<" y tiene "<<numDedos<<" dedos en los pies."<<endl;
}

