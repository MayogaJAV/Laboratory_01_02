#ifndef OPERACIONFACTORIAL_H
#define OPERACIONFACTORIAL_H
#include "OperacionBase.h"
#include<iostream>
using namespace std;
class OperacionFactorial : public OperacionBase {
public:
	OperacionFactorial();
	~OperacionFactorial();
	void setfactorial(int);
	int getfactorial();
	int devolverfactorial(int);
};

#endif

