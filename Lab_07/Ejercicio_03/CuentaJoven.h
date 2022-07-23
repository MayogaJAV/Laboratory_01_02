#ifndef CUENTAJOVEN_H
#define CUENTAJOVEN_H
#include "ProductoBancario.h"
#include<iostream>
using namespace std;
class CuentaJoven : public ProductoBancario {
public:
	CuentaJoven(string,double,int);
	~CuentaJoven();
	void mostrar_info(string);
};

#endif

