#ifndef NACIMIENTO_H
#define NACIMIENTO_H
#include<iostream>
using namespace std;
class Nacimiento {
private:
	string nombre;
	int diaP,mesP,anioP;
public:
	Nacimiento(string,int,int,int);
	~Nacimiento();
	void edad();
};

#endif

