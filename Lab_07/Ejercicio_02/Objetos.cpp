#include "Objetos.h"
#include "Color.h"
#include "Material.h"
#include<iostream>
using namespace std;
Objetos::Objetos() {
}
Objetos::~Objetos() {	
}
void Objetos::descripcion(string cosa,string tonocolor,string material){
	if(tonocolor==azul){
		cout<<"El objeto "<<cosa<<" es de color"<<azul<<" y esta hecho de material("<<material<<")"<<endl;
	}
	else if(tonocolor==rojo){
		cout<<"El objeto "<<cosa<<" es de color "<<rojo<<" y esta hecho de material("<<material<<")"<<endl;
	}
	else if(tonocolor==verde){
		cout<<"El objeto "<<cosa<<" es de color "<<verde<<" y esta hecho de material("<<material<<")"<<endl;
	}
}
