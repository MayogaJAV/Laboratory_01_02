#ifndef HIPOTECA_H
#define HIPOTECA_H
#include "ProductoBancario.h"
#include<iostream>
using namespace std;
class Hipoteca : public ProductoBancario {
public:
	Hipoteca(string,double,int);
	~Hipoteca();
	void mostrar_info(string);
private:
};

#endif

