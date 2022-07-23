#include "Alumno.h"
#include<iostream>
#include <string>
using namespace std;
Alumno::Alumno(string nombre,int CUI,float nota1,float nota2,float nota3) {
	this->nombre=nombre;
	this->CUI=CUI;
	this->nota1=nota1;
	this->nota2=nota2;
	this->nota3=nota3;
}
Alumno::~Alumno(){	
}
string Alumno::getnombre(){
	return nombre;
}
int Alumno::getcui(){
	return CUI;
}
float Alumno::getnota1(){
	return nota1;
}
float Alumno::getnota2(){
	return nota2;
}
float Alumno::getnota3(){
	return nota3;
}
float Alumno::promedio(){
	float promedioG=0;
	promedioG=(nota1+nota2+nota3)/3;
	cout<<"El promedio de las 3 notas es: "<<promedioG<<endl;
	return promedioG;
}
void Alumno::aprobar(int prome,string ap,string am){
	if((prome>=10.5)){
		cout<<"El alumno "<<nombre<<" "<<ap<<" "<<am<<" aprobo el curso de Ciencia de la Computacion II. "<<endl;
	}
	else{
		cout<<"El alumno "<<nombre<<" "<<ap<<" "<<am<<" desaprobo el curso de Ciencia de la Computacion II. "<<endl;
	}
}
