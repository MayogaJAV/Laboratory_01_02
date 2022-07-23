#ifndef MATRIZ_H
#define MATRIZ_H
#include<iostream>
using namespace std;
class Matriz {
private:
	int filas;
	int columnas;
public:
	Matriz(int,int);
	~Matriz();
	void llenarma(int**);
	void buscarma(int,int**);
	void mostrarma(int**);
};

#endif

