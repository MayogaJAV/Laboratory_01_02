#include "Arreglo.h"
#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	int contador=0;
	Arreglo arreglo;
	cout<<"La lista que podra interactuar tendra un maximo de 5 espacios. "<<endl;
	while(true){
		cout<<"1.Agregar datos. "<<endl;
		cout<<"2.Modificar datos. "<<endl;
		cout<<"3.Mostrar datos. "<<endl;
		cout<<"4.Salir."<<endl;
		cout<<"Elija una opcion: "<<endl;
		cin>>opcion;
		if((opcion)>=1&&(opcion<=4)){
			if(opcion==1){
				if(contador<5){
					int numero;
					cout<<"Indique el numero para agregar a la lista: "<<endl;
					cin>>numero;
					arreglo.llenardatos(numero,contador);
					contador++;
				}
				
			}
			else if(opcion==2){
				cout<<""
			}
			else if(opcion==3){
				
			}
			else{
				break;
			}
		}
		else{
			cout<<"Vuelva a ingresar la opcion. "<<endl;
			break;
		}
	}
	
	return 0;
}

