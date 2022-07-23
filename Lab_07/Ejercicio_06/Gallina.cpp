#include "Gallina.h"
#include<iostream>
using namespace std;
Gallina::Gallina(int numpatas,string tipo_reproduccion,int numDedos) {
	this->numpatas=numpatas;
	this->tipo_reproduccion=tipo_reproduccion;
	this->numDedos=numDedos;
}

Gallina::~Gallina() {
	
}
void Gallina::mostrar_info(){
	cout<<"La gallina tiene "<<numpatas<<" patas, su reproduccion es "<<tipo_reproduccion<<" y tiene "<<numDedos<<" dedos en los pies."<<endl;
}
