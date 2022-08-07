
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
//Ejercicio_01
/*template<int N>
struct add_cifras{
	enum {
		valor = N % 10 + add_cifras<N/10>::valor
	};
};
template <>
struct add_cifras <0>
{
	enum { valor = 0 };
};
int main() {
	int x= add_cifras<333>::valor;
	std::cout << "El suma de cifras que contiene " << 333 << " es: " <<x << std::endl;
}*/

//Ejercicio_02
/*template<int N>
struct FIBONACCI{
	enum {
		valor= FIBONACCI<N - 1>::valor + FIBONACCI<N - 2>::valor
	};
};
template<>
struct FIBONACCI<0>{
	enum {
		valor = 0
	};
};
template<>
struct FIBONACCI<1> {
	enum {
		valor = 1
	};
};

int main() {
	int numero= FIBONACCI<13>::valor;
	std::cout << "La posicion 13 del numero Fibonacci se encuentra el numero " << numero << "." << std::endl;
}*/

//Ejercicio_03
/*template<int N, int F>
struct POTENCIA {
	enum {
		valor = N * POTENCIA<N,F-1>::valor 
	};
};
template<int N>
struct POTENCIA<N,0> {
	enum {
		valor = 1
	};
};
int main() {
	int numero = POTENCIA<4,4>::valor;
	std::cout << "Potencia: " << numero << std::endl;
}*/

//Ejercicio_04
template<int N>
struct HEXADECIMAL {
	std::string valor = funcion_recursiva.valor + listah[N % 16];
	HEXADECIMAL<N / 16> funcion_recursiva;
	char listah[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	
};
template<>
struct HEXADECIMAL<0> {
	std::string valor = "";
};
int main() {
	HEXADECIMAL<438483> v;
	std::cout << " El numero 438483 transformado a hexadecimal es: " << v.valor << "." << std::endl;
}

//Ejercicio_05
/*template<int N>
struct BINARIO {
	char listah[2] = { '0','1'};
	std::string valor = funcion_recursiva.valor + listah[N % 2];
	BINARIO<N / 2> funcion_recursiva;
	
};
template<>
struct BINARIO <0>{
	std::string valor = "";
};
int main() {
	BINARIO<2544357> v;
	std::cout << "El numero 2544357 transformado a binario es: " << v.valor << ". " << std::endl;
}*/

//Ejercicio_06