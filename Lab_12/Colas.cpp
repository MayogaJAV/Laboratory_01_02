//Colas.h
#include <iostream>
#include <random>
#include <list>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <stdlib.h>
#include <string.h>
#include <regex>
#include <ctime>
#include <iomanip>
#include "Colas.h"
using namespace std;
ListaE* crear_lista(int numero_n){
	ListaE* nuevo=new ListaE(numero_n);
	nuevo->next=NULL;
	return nuevo;
}
void Insertar_NumCola(ListaE* &Lista,ListaE*&Listaaux,int numero){//0
	if(Lista==NULL){
		Lista=crear_lista(numero);
		Listaaux=Lista;
	}
	else{
		if((Listaaux->next)==NULL){
			int aux;
			Listaaux=crear_lista(numero);
			aux=Lista->numero;
			Lista->numero=Listaaux->numero;
			Listaaux->numero=aux;
			Insertar_NumCola(Lista->next,Listaaux,aux);
		}
		else{
			Insertar_NumCola(Lista->next,Listaaux,numero);
		}
	}
}
void Insertar_NumCola_Ultimo(ListaE* &Lista,ListaE*&Listaaux,int numero){
	if(Lista==NULL){
		Lista=crear_lista(numero);
		Listaaux=Lista;
	}
	else{
		Insertar_NumCola_Ultimo(Lista->next,Listaaux,numero);
	}
}
void Encontrar_numeros_espe(ListaE*& Lista,int numero,int& i){
	if(Lista!=NULL){
		if((Lista->numero)==numero){
			i++;
			Encontrar_numeros_espe(Lista->next,numero,i);
		}
		else{
			Encontrar_numeros_espe(Lista->next,numero,i);
		}
	}
}
void Eliminar_numeros_espe(ListaE*& Lista,int numero,int i,int& j){
	if(Lista!=NULL){
		if((Lista->numero)==numero){
			j++;
			if(j==i){
				Lista=Lista->next;
			}
			else{
				Eliminar_numeros_espe(Lista->next,numero,i,j);
			}
		}
		else{
			Eliminar_numeros_espe(Lista->next,numero,i,j);
		}
	}
}
void mostrar_lista(ListaE* &Lista){
	if(Lista!=NULL){
		cout<<"Nodo: "<<Lista->numero<<endl;
		mostrar_lista(Lista->next);
	}
}
void mostrar_comparacion(ListaE*& Lista1,ListaE*& Lista2,int longitud,int& longitud2,string c){
	if(longitud2!=0){
		if(longitud2==longitud){
			cout<<"\t"<<Lista1->numero<<" "<<c<<" "<<Lista2->numero<<endl;
			longitud2--;
			mostrar_comparacion(Lista1->next,Lista2->next,longitud,longitud2,c);
		}
		else{
			if(Lista1==NULL){
				cout<<"\t"<<" "<<" --- "<<Lista2->numero<<endl;
				longitud2--;
				ListaE* Ptraux=NULL;
				mostrar_comparacion(Ptraux,Lista2->next,longitud,longitud2,c);
				Ptraux->~ListaE();
			}
			else if((Lista1!=NULL)&&(Lista2!=NULL)){
				cout<<"\t"<<Lista1->numero<<" --- "<<Lista2->numero<<endl;
				longitud2--;
				mostrar_comparacion(Lista1->next,Lista2->next,longitud,longitud2,c);
			}
			else if(Lista2==NULL){
				cout<<"\t"<<Lista1->numero<<" --- "<<" "<<endl;
				longitud2--;
				ListaE* Ptraux=NULL;
				mostrar_comparacion(Lista1->next,Ptraux,longitud,longitud2,c);
				Ptraux->~ListaE();
			}
		}
	}
}
void Eliminar_primero(ListaE*& Lista){
	Lista=Lista->next;
}
void comparar_listas(ListaE*& Lista1,ListaE*& Lista2,ListaE*& Listaaux,int& contador,int longitud){
	if(Lista1!=NULL){
		if(Lista2!=NULL){
			if(contador!=0){
				if((Lista1->numero)>(Lista2->numero)){
					int numero1,numero2;
					int longitud2;
					longitud2=longitud;
					numero1=Lista1->numero;
					numero2=Lista2->numero;
					cout<<"La edad "<<Lista1->numero<<" es mayor que la edad "<<Lista2->numero<<"."<<endl;
					mostrar_comparacion(Lista1,Lista2,longitud,longitud2," > ");
					Eliminar_primero(Lista1);
					Eliminar_primero(Lista2);
					Insertar_NumCola_Ultimo(Lista1,Listaaux,numero1);
					Insertar_NumCola_Ultimo(Lista2,Listaaux,numero2);
					contador--;
					cout<<endl;
					comparar_listas(Lista1,Lista2,Listaaux,contador,longitud);
				}
				else if((Lista1->numero)==(Lista2->numero)){
					int numero1,numero2;
					int longitud2;
					longitud2=longitud;
					numero1=Lista1->numero;
					numero2=Lista2->numero;
					cout<<"La edad "<<Lista1->numero<<" es igual que la edad "<<Lista2->numero<<"."<<endl;
					mostrar_comparacion(Lista1,Lista2,longitud,longitud2," = ");
					Eliminar_primero(Lista1);
					Eliminar_primero(Lista2);
					Insertar_NumCola_Ultimo(Lista1,Listaaux,numero1);
					Insertar_NumCola_Ultimo(Lista2,Listaaux,numero2);
					contador--;
					cout<<endl;
					comparar_listas(Lista1,Lista2,Listaaux,contador,longitud);
				}
				else{
					int numero1,numero2;
					int longitud2;
					longitud2=longitud;
					numero1=Lista1->numero;
					numero2=Lista2->numero;
					cout<<"La edad "<<Lista1->numero<<" es menor que la edad "<<Lista2->numero<<"."<<endl;
					mostrar_comparacion(Lista1,Lista2,longitud,longitud2," < ");
					Eliminar_primero(Lista1);
					Eliminar_primero(Lista2);
					Insertar_NumCola_Ultimo(Lista1,Listaaux,numero1);
					Insertar_NumCola_Ultimo(Lista2,Listaaux,numero2);
					contador--;
					cout<<endl;
					comparar_listas(Lista1,Lista2,Listaaux,contador,longitud);
				}
			}
			else{
				int longitud2;
				longitud2=longitud;
				cout<<"Comparacion Terminada."<<endl;
				mostrar_comparacion(Lista1,Lista2,longitud,longitud2,"---");
				cout<<endl;
			}
		}
	}
}
int main(){
	int opcion,numnodos;
	cout<<"Ingrese la cantidad de nodos:"<<endl;
	cin>>numnodos;
	int contador=0;
	ListaE* Nodo=NULL;
	ListaE* Nodoaux1=NULL;
	while(true){
		cout<<"Ingrese la opcion que desea:"<<endl;
		cout<<"1. Ingresar datos en forma de cola."<<endl;
		cout<<"2. Eliminar un nodo especifico."<<endl;
		cout<<"3. Buscar un dato en la cola."<<endl;
		cout<<"4. Mostrar cola."<<endl;
		cout<<"5. Comparar datos de dos colas."<<endl;
		cout<<"6. Salir."<<endl;
		cin>>opcion;
		if(opcion==1){
			srand(time(NULL));
			if(contador!=1){
				int opcion;
				cout<<"Ingrese la opcion:"<<endl;
				cout<<"1. Ingresar datos manualmente."<<endl;
				cout<<"2. Ingresar datos aleatoriamente."<<endl;
				cin>>opcion;
				if(opcion==1){
					for(int i=0;i<numnodos;i++){
						int numero;
						cout<<"Ingrese el nodo:"<<endl;
						cin>>numero;
						Insertar_NumCola(Nodo,Nodoaux1,numero);
						contador=1;
					}
					
				}
				else{
					for(int i=0;i<numnodos;i++){
						int numero;
						numero=1+rand()%(11-1);
						Insertar_NumCola(Nodo,Nodoaux1,numero);
						contador=1;
					}
				}
			}
			else{
				cout<<"Los elementos ya han sido ingresados."<<endl;
			}
		}
		else if(opcion==2){
			int contador=0;
			int contador2=0;
			int numero;
			cout<<"Indique el nodo:"<<endl;
			cin>>numero;
			Encontrar_numeros_espe(Nodo,numero,contador);
			if(contador!=0){
				cout<<"Se encontro el nodo "<<numero<<" en la cola."<<endl;
				Eliminar_numeros_espe(Nodo,numero,contador,contador2);
				numnodos--;
			}
			else{
				cout<<"El nodo indicado no se encuentra en la cola."<<endl;
			}
		}
		else if(opcion==3){
			int contador=0;
			int numero;
			cout<<"Indique el nodo a encontrar:"<<endl;
			cin>>numero;
			Encontrar_numeros_espe(Nodo,numero,contador);
			if(contador!=0){
				cout<<"Hay "<<contador<<" nodos que tienen el valor de "<<numero<<" en la cola."<<endl;
			}
			else{
				cout<<"El nodo indicado no se encuentra en la cola."<<endl;
			}
		}
		else if(opcion==4){
			cout<<"############LISTA DE NODOS############"<<endl;
			mostrar_lista(Nodo);
		}
		else if(opcion==5){
			int numnodos2;
			int contadorlista2=0;
			int opcion2;
			ListaE* Nodo2=NULL;
			ListaE* Nodoaux2=NULL;
			if(contador==1){
				cout<<"Ingrese la cantidad de edades para la segunda cola:"<<endl;
				cin>>numnodos2;
				cout<<"Ingresando edades en la segunda cola."<<endl;
				if(contadorlista2!=1){
					int opcion;
					cout<<"Ingrese la opcion:"<<endl;
					cout<<"1. Ingresar edades manualmente."<<endl;
					cout<<"2. Ingresar edades aleatoriamente."<<endl;
					cin>>opcion;
					if(opcion==1){
						for(int i=0;i<numnodos2;i++){
							int numero;
							cout<<"Ingrese la edad "<<i+1<<":"<<endl;
							cin>>numero;
							Insertar_NumCola(Nodo2,Nodoaux2,numero);
							contadorlista2=1;
						}
					}
					else{
						for(int i=0;i<numnodos2;i++){
							int numero;
							numero=1+rand()%(11-1);
							Insertar_NumCola(Nodo2,Nodoaux2,numero);
							contadorlista2=1;
						}
					}
				}
				else{
					cout<<"Los elementos de la segunda cola ya han sido ingresados."<<endl;
				}
				int longitud;
				cout<<"Ingrese la cantidad de comparaciones entre las dos lista:"<<endl;
				cin>>longitud;
				int num_comparar=longitud;
				int longitud_listas;
				if(numnodos>=numnodos2){
					longitud_listas=numnodos;
				}
				else{
					longitud_listas=numnodos2;
				}
				comparar_listas(Nodo,Nodo2,Nodoaux2,num_comparar,longitud_listas);
				Nodo2->~ListaE();
				Nodoaux2->~ListaE();
			}
			else{
				cout<<"Debe completar datos en la primera lista."<<endl;
			}
		}
		else if(opcion==6){
			break;
		}
		else{
			cout<<"Opcion ingresada incorrecta. Vuelva a intentarlo."<<endl;
		}
	}
}