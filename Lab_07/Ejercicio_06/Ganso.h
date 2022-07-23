#ifndef GANSO_H
#define GANSO_H
#include "Ave.h"
#include<iostream>
using namespace std;
class Ganso : public Ave {
protected:
	int numDedos;
public:
	Ganso(int,string,int);
	~Ganso();
	void mostrar_info();
};

#endif

