#include "Hipoteca.h"
#include<iostream>
using namespace std;
Hipoteca::Hipoteca(string cliente,double saldo,int NUMproductos) {
	this->cliente=cliente;
	this->saldo=saldo;
	this->NUMproductos=NUMproductos;
}

Hipoteca::~Hipoteca() {
	
}
void Hipoteca::mostrar_info(string tcuenta){
	if(tcuenta=="CuentaJoven"){
		cout<<"La cuenta en nombre del propietario "<<cliente<<" eligio tener una Cuenta Joven con  "<<NUMproductos<<" productos con un saldo total de "<<saldo<<"soles."<<endl;
	}
	else{
		cout<<"La cuenta en nombre del propietario "<<cliente<<" eligio tener una Hipoteca con un total de "<<NUMproductos<<" productos con un saldo total de "<<saldo<<"soles."<<endl;
	}
	
}
