#include "OperacionFactorial.h"
#include<iostream>
using namespace std;
OperacionFactorial::OperacionFactorial() {
}

OperacionFactorial::~OperacionFactorial() {}
void OperacionFactorial::setfactorial(int factorial){
	numero=factorial;
}
int OperacionFactorial::getfactorial(){
	return numero;
}
int OperacionFactorial::devolverfactorial(int facto){
	int multi=1; 
	for(int i=1;i<=facto;i++){
		multi=multi*i;
	}
	return multi;
}
