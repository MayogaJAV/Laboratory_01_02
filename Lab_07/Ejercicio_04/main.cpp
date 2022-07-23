#include<iostream>
#include "ClaseDisco.h"
using namespace std;

int main (int argc, char *argv[]) {
	string artista,genero;
	int numi,discosl;
	cout<<"Ingrese el nombre de la banda o artista musical:"<<endl;
	cin>>artista;
	cout<<"Ingrese el numero de integrantes de la banda o artista musical:"<<endl;
	cin>>numi;
	cout<<"Ingrese el numero de discos lanzados de la banda o artista musical:"<<endl;
	cin>>discosl;
	cout<<"Ingrese el genero de la banda o artista musical:"<<endl;
	cin>>genero;
	ClaseDisco Artista(genero,artista,numi,discosl);
	Artista.mostrar_info();
	return 0;
}

