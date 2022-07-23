#ifndef ARREGLO_H
#define ARREGLO_H
#include<iostream>
using namespace std;
class Arreglo {
private:
	int tamanio;
	int matriz[5][5];
public:
	Arreglo(int);
	~Arreglo();
	void llenardatos();
	void mostrardatos();
	void modificardatos();
};

#endif

