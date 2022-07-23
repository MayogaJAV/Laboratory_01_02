#ifndef arreglo_H
#define arreglo_H
#include <iostream>
using namespace std;
class Arreglo{
public:
	int arreglo[5] = {-322, -322, -322, -322, -322};
	Arreglo();
	~Arreglo();
	void llenardatos(int);
	void borrardatos(int);
	void mostrardatos();
};
#endif

