#include "CuentaJoven.h"
#include<iostream>
using namespace std;
CuentaJoven::CuentaJoven(string cliente,double saldo,int NUMproductos) {
	this->cliente=cliente;
	this->saldo=saldo;
	this->NUMproductos=NUMproductos;
}

CuentaJoven::~CuentaJoven() {
	
}
void CuentaJoven::mostrar_info(string tcuenta){
	if(tcuenta=="CuentaJoven"){
		cout<<"La cuenta en nombre del propietario "<<cliente<<" eligio tener una Cuenta Joven de "<<NUMproductos<<" productos con un saldo total de "<<saldo<<" soles."<<endl;
	}
	else{
		cout<<"La cuenta en nombre del propietario "<<cliente<<" eligio tener una Hipoteca de "<<NUMproductos<<" productos con un saldo total de "<<saldo<<" soles."<<endl;
	}
	
}

