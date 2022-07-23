#ifndef PATO_H
#define PATO_H
#include "Ave.h"
#include<iostream>
using namespace std;
class Pato : public Ave {
protected:
	int numDedos;
public:
	Pato(int,string,int);
	~Pato();
	void mostrar_info();
};

#endif

