#include "CuentaJoven.h"
#include "Hipoteca.h"
#include<iostream>
using namespace std;

int main () {
	string nombre;
	double saldo;
	int numproductos;
	cout<<"Ingrese el nombre del propietario de la cuenta: "<<endl;
	cin>>nombre;
	cout<<"Ingrese el saldo de la cuenta:"<<endl;
	cin>>saldo;
	cout<<"Ingrese el numero de productos adquiridos:"<<endl;
	cin>>numproductos;
	cout<<"Indique cual es la accion que desea realizar:"<<endl;
	while(true){
		int opcion;
		cout<<"1. CuentaJoven."<<endl;
		cout<<"2. Hipoteca "<<endl;
		cin>>opcion;
		if(opcion==1){
			CuentaJoven cjoven(nombre,saldo,numproductos);
			cjoven.mostrar_info("CuentaJoven");
			break;
		}
		else if(opcion==2){
			Hipoteca cjoven(nombre,saldo,numproductos);
			cjoven.mostrar_info("Hipoteca");
			break;
		}
		else{
			cout<<"Vuelva a intentarlo."<<endl;
		}
	}
	
	return 0;
}

