#ifndef GALLINA_H
#define GALLINA_H
#include "Ave.h"
#include<iostream>
using namespace std;
class Gallina : public Ave {
protected:
	int numDedos;
public:
	Gallina(int,string,int);
	~Gallina();
	void mostrar_info();
};

#endif

