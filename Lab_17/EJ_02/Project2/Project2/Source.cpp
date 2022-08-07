//Source.cpp
#include <iostream>
#include "Struct.h"
#include "time.h"
template <typename T>
void InsertionSort(T arreglo[], int n) {
    for (int k = 1; k < n; k++) {
        T temp = arreglo[k];
        int j = k - 1;
        while (j >= 0 && temp <= arreglo[j]) {
            arreglo[j + 1] = arreglo[j];
            j = j - 1;
        }
        arreglo[j + 1] = temp;
    }
}
int main() {    
	int n;
	std::cout << "Ingrese la cantidad de elementos que habra en la lista: " << std::endl;
	std::cin >> n;
    int* lista = new int[n];
    srand(time(0));
    for (int i = 0; i < n; i++) {
        char numero;
        numero = 1 + rand() % (50 - 1);
        Ordenacion<int>* listaa= new Ordenacion<int>;
        listaa->Insertar(lista, i, numero);
        delete listaa;
    }
    InsertionSort(lista, n);
    std::cout << "Lista de elementos ordenada:\n\t ";
    for (int i = 0; i < n; i++) {
        std::cout << lista[i] << " ";
    }
}