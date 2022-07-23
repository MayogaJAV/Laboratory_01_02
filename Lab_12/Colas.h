//Colas.h
#include <iostream>
using namespace std;
class ListaE{
public:
	int numero=-1;
	ListaE *next=NULL;
public:
	ListaE(int numero){
		this->numero=numero;
	}
	~ListaE(){
	}
};