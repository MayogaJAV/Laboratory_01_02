#include "arreglo.h"
#include <iostream>
using namespace std;

int main(){
	int opc=0;
	int insertar;
	int borrar;
	Arreglo a = Arreglo();
	while(opc!=4){
		cout << "Ingrese la opcion a elegir: " << endl;
		cout << "1. Agregar dato." << endl;
		cout << "2. Eliminar dato. " << endl;
		cout << "3. Mostrar dato. " << endl;
		cout << "4. Salir." << endl;
		cin >> opc;
		if(opc==1){
			cout << "Inserte el numero que desea insertar." << endl; cin >> insertar;
			a.llenardatos(insertar);
		}
		else if(opc==2){
			cout << "Inserte el numero que desea borrar." << endl; cin >> borrar;
			a.borrardatos(borrar);
		}
		else if(opc==3){
			a.mostrardatos();
		}
	}
}
