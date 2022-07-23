#ifndef ALUMNO_H
#define ALUMNO_H
#include<iostream>
#include<iostream>
#include <string>
using namespace std;
class Alumno {
private:
	string nombre;
	int CUI;
	float nota1;
	float nota2;
	float nota3;
public:
	Alumno(string,int,float,float,float);
	~Alumno();
	string getnombre();
	int getcui();
	float getnota1();
	float getnota2();
	float getnota3();
	float promedio();
	void aprobar(int,string,string);
};
#endif

