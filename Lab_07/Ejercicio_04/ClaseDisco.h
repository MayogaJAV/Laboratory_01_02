#ifndef CLASEDISCO_H
#define CLASEDISCO_H
#include "ClaseMultimedia.h"
#include<iostream>
using namespace std;
class ClaseDisco : public ClaseMultimedia {
private:
	int NumerosdeDiscos;
public:
	ClaseDisco(string,string,int,int);
	~ClaseDisco();
	void mostrar_info();
};

#endif

