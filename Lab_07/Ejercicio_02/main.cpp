#include<iostream>
#include "Objetos.h"
using namespace std;

int main (int argc, char *argv[]) {
	while(true){
		int opcion;
		cout<<"MENU:"<<endl;
		cout<<"Seleccione el objeto que desea describir: "<<endl;
		cout<<"1. Juguete."<<endl;
		cout<<"2. Silla."<<endl;
		cout<<"3. Manzana."<<endl;
		cout<<"4. Cesped."<<endl;
		cout<<"5. Cuaderno."<<endl;
		cout<<"6. Pelota."<<endl;
		cout<<"7. Salir."<<endl;
		cin>>opcion;
		if(opcion==1){
			Objetos objeto;
			objeto.descripcion("Juguete","verde","plastico");
		}
		else if(opcion==2){
			Objetos objeto;
			objeto.descripcion("Silla","azul","madera");
		}
		else if(opcion==3){
			Objetos objeto;
			objeto.descripcion("Manzana","rojo","Natural");
		}
		else if(opcion==4){
			Objetos objeto;
			objeto.descripcion("Cesped","verde","Natural");
		}
		else if(opcion==5){
			Objetos objeto;
			objeto.descripcion("Cuaderno","azul","carton");
		}
		else if(opcion==6){
			Objetos objeto;
			objeto.descripcion("Pelota","rojo","plastico");
		}
		else if(opcion==7){
			break;
		}
		else{
			cout<<"Ingrese un valor incorrecto. Vuelva a intentarlo."<<endl;
		}
	}
	return 0;
}

