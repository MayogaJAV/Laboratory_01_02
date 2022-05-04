#include <iostream>
#include <random>
#include <list>
#include <fstream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>
#include <ctime>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <chrono>
#include <sys/time.h>
#include <ctime>
using namespace std;
//Ejercicio 1
/*int main(){
    string nombre[3];
    string apellido[3];
    string edad[3];
    string dni[3];
    for(int i=0;i<3;i++){
        cout<<"****PERSONA"<<i+1<<"****"<<endl;
        cout<<"Ingrese el nombre: "<<endl;
        getline(cin,nombre[i]);
        cout<<"Ingrese el apellido: "<<endl;;
        getline(cin,apellido[i]);
        cout<<"Ingrese la edad: "<<endl;;
        getline(cin,edad[i]);
        cout<<"Ingrese el DNI: "<<endl;;
        getline(cin,dni[i]);
        cout<<endl;
    }
}*/
//Ejercicio 2
/*bool buscarnum(int A[], int a){
    bool contador=false;
    while(true){
        for(int i=0;i<8;i++){
            if(a==A[i]){
                contador=true;
                return contador;
                break;
                break;
            }
        }
        if(contador==false){
            return contador;
            break;
        }

    }
    
}
void mostrar(int A[]){
    for(int i=0;i<8;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int numeros[8];
    int a;
    cout<<"Ingrese el numero a buscar en la lista: "<<endl;
    cin>>a;
    srand(time(NULL));
    for(int i=0;i<8;i++){
        numeros[i]=1+rand()%(11-1);
    }
    mostrar(numeros);
    if(buscarnum(numeros,a)==true){
        cout<<"El numero "<<a<<" se encuentra en la lista."<<endl;
    }
    else{
        cout<<"El numero "<<a<<" no se encuentra en la lista."<<endl; 
    }
}*/
//Ejercicio 3
/*void leer(int A[][3]){
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<"Ingrese el numero de posicion["<<i<<","<<j<<"]: "<<endl;
            cin>>A[i][j];
        }
    }
}
void par(int A[][3]){
    
    for(int i=1;i<=5;i++){
        for(int j=0;j<3;j++){
            if(i%2==0){
                int suma=0;
                for(int a=0;a<3;a++){
                    suma=suma+A[i-1][a];
                }
                cout<<"La suma de valores de la columna "<<i<<" es: "<<suma<<endl;
                suma=0;
                break;
            }
        }
        
        
    }
}
void mostrar(int A[][3]){
    cout<<"Matriz 5x3: "<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int lista[5][3];
    leer(lista);
    mostrar(lista);
    par(lista);
}*/
//Ejercicio 4
/*void llenar(int A[]){
    int contador=0,contador2=0;
    for(int i=1;i<=100;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                contador++;
            }
        }
        if(contador==2){
            A[contador2]=i;
            contador2++;
            contador=0;
            
        }
        else{
            contador=0;
        }
    }
}
void mostrar(int A[]){
    cout<<"Lista de numeros en orden descendente  de primos entre 1 y 100: "<<endl;
    for(int i=24;i>=0;i--){
        cout<<A[i]<<" "; 
    }
    cout<<endl;
}
int main(){
    int primos[25];
    llenar(primos);
    mostrar(primos);
}*/
//Ejericicio 5
/*void llenarproducto(string A[][3]){
    for(int i=0;i<10;i++){
        for(int j=0;j<3;j++){
            string nombre;
            string precio;
            string stock;
            cout<<"****Producto No."<<i+1<<"****"<<endl;
            cout<<"Ingrese el nombre del producto: "<<endl;
            cin>>A[i][j];
            cout<<"Ingrese el precio del producto: "<<endl;
            cin>>A[i][j+1];
            cout<<"Ingrese la cantidad de stock del producto: "<<endl;
            cin>>A[i][j+2];
            break;
        }
        cout<<endl;
    }
}
bool buscarproducto(string A[][3],string producto){
    for(int i=0;i<10;i++){
        if(producto==A[i][0]){
            return true;
        }
    }
}
void modificarproducto(string A[][3],string producto){
    for(int i=0;i<10;i++){
        if(producto==A[i][0]){
            cout<<"****Producto No. "<<i+1<<"****"<<endl;
            cout<<"Ingrese el nuevo precio del producto: "<<endl;
            cin>>A[i][1];
            cout<<"Ingrese la nueva cantidad de stock del producto: "<<endl;
            cin>>A[i][2];
        }
    }
}
int main(){
    string productos[10][3];
    int opcion;
    bool a=false;
    while(true){
        cout<<"Ingrese una opcion a elegir: "<<endl;
        cout<<"1. Agregar o quitar un producto. "<<endl;
        cout<<"2. Buscar algun producto. "<<endl;
        cout<<"3. Modificar informacion de un producto. "<<endl;
        cout<<"4. Salir."<<endl;
        cin>>opcion;
        if((opcion>=1)&&(opcion<=4)){
            if(opcion==1){
                llenarproducto(productos);
                a=true;
            }
            else if(opcion==2){
                if(a==true){
                    
                    string producto;
                    cout<<"Ingrese el nombre del producto: "<<endl;
                    cin>>producto;
                    if(buscarproducto(productos,producto)==true){
                        cout<<"El producto "<<producto<<" se encuentra en la lista. "<<endl;
                    }
                    else{
                        cout<<"El producto "<<producto<<" no se encuentra en la lista. "<<endl;
                    }
                }
                else{
                    cout<<"Se continuara a agregar los productos."<<endl;
                    a=true;
                    llenarproducto(productos);
                }
                
            }
            else if(opcion==3){
                if(a==true){
                    a=true;
                    string producto;
                    cout<<"Ingrese el nombre del producto: "<<endl;
                    cin>>producto;
                    if(buscarproducto(productos,producto)==true){
                        modificarproducto(productos,producto);
                    }
                    else{
                        cout<<"El producto "<<producto<<" no se encuentra en la lista. "<<endl;
                    }
                }
                else{
                    cout<<"Se continuara a agregar los productos."<<endl;
                    a=true;
                    llenarproducto(productos);
                }
            }
            else{
                break;
            }
        }
        else{
            cout<<"Vuelva a ingresar la opcion."<<endl;
            main();
        }
    }
}*/
//Ejercicio 6
/*void leer(int A[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Ingrese el numero de posicion["<<i<<","<<j<<"]: "<<endl;
            cin>>A[i][j];
        }
    }
}
void comparar(int A[]){
    int aux;
    for(int i=0;i<3-1;i++){
        for(int j=0;j<3-1;j++){
            if(A[i]>A[i+1]){
                aux=A[i+1];
                A[i+1]=A[i];
                A[i]=aux;
            }
        }
    }
    cout<<"La suma mas grande de fila es: "<<A[2]<<endl;
}
void suma(int A[][3]){
    int B[3];
    for(int i=0;i<3;i++){
        int sumatoria=0;
        for(int j=0;j<3;j++){
            sumatoria=sumatoria+A[i][j];
        }
        B[i]=sumatoria;
        cout<<"La suma de la fila "<<i+1<<" es: "<<sumatoria<<endl;
        sumatoria=0;
    }
    comparar(B);
}
int main(){
    int A[3][3];
    leer(A);
    suma(A);
}*/
//Ejercicio 7

void leer(int A[][5],int filas,int columnas){
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"Ingrese el numero de posicion["<<i<<","<<j<<"]: "<<endl;
            cin>>A[i][j];
        }
    }
}
void mostrar(int A[][5],int filas,int columnas){
    cout<<"Matriz de numeros. "<<endl;
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}
void copia(int A[][5],int B[][5],int filas,int columnas){
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            B[i][j]=A[i][j];
        }
    }
}
void moverc(int A[][5],int filas, int columnas,int posi,int posf){
    int B[filas][5];
    copia(A,B,filas,columnas);
    for(int i=0;i<columnas;i++){
        A[i][posf]=B[i][posi];
        A[i][posi]=B[i][posf];
    }

}
void moverf(int A[][5],int filas, int columnas,int posi,int posf){
    int B[filas][5];
    copia(A,B,filas,columnas);
    for(int i=0;i<filas;i++){
        A[posf][i]=B[posi][i];
        A[posi][i]=B[posf][i];
    }
    
}
int main(){
    int columnas,filas;
    cout<<"Ingrese el numero de filas: "<<endl;
    cin>>filas;
    int opcion;
    int A[filas][5];
    columnas=5;
    leer(A,filas,columnas);
    while(true){
        cout<<"Ingrese la opcion a elegir: "<<endl;
        cout<<"1. Mover columnas. "<<endl;
        cout<<"2. Mover filas. "<<endl;
        cout<<"3. Salir. "<<endl;
        cin>>opcion;
        cout<<endl<<endl;
        if((opcion>0)&&(opcion<4)){
            if(opcion==1){
                int posi,posf;
                mostrar(A,filas,columnas);
                cout<<"Ingrese la columna que desea mover y su destino: "<<endl;
                cout<<"Posicion Inicial: "<<endl;
                cin>>posi;
                cout<<"Posicion Final: "<<endl;
                cin>>posf;
                if((posi>0)&&(posi<=columnas)&&(posf>0)&&(posf<=columnas)){
                    moverc(A,filas,columnas,posi-1,posf-1);
                    mostrar(A,filas,columnas);
                }
                else{
                    cout<<"No existe la columna que introdujo. "<<endl;
                }
            }
            else if(opcion==2){
                int posi,posf;
                mostrar(A,filas,columnas);
                cout<<"Ingrese la columna que desea mover y su destino: "<<endl;
                cout<<"Posicion Inicial: "<<endl;
                cin>>posi;
                cout<<"Posicion Final: "<<endl;
                cin>>posf;
                if((posi>0)&&(posi<=filas)&&(posf>0)&&(posf<=filas)){
                    moverf(A,filas,columnas,posi-1,posf-1);
                    mostrar(A,filas,columnas);
                }
                else{
                    cout<<"No existe la columna que introdujo. "<<endl;
                }
            }
            else{
                break;
            }
        }
        else{
            cout<<"Vuelve a intentarlo."<<endl;
        }
    }
}