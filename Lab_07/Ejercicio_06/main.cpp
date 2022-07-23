#include<iostream>
#include "Ganso.h"
#include "Pato.h"
#include "Gallina.h"
using namespace std;

int main (int argc, char *argv[]) {
	Ganso gansito(2,"viviparo",3);
	Pato patito(2,"viviparo",4);
	Gallina gallinita(2,"viviparo",4);
	gansito.mostrar_info();
	patito.mostrar_info();
	gallinita.mostrar_info();
	return 0;
}

