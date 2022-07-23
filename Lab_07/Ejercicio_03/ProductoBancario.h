#ifndef PRODUCTOBANCARIO_H
#define PRODUCTOBANCARIO_H
#include<iostream>
using namespace std;
class ProductoBancario {
protected:
	string cliente;
	double saldo;
	int NUMproductos;
public:
	ProductoBancario();
	~ProductoBancario();
};

#endif

