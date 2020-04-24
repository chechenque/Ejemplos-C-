//Dado
#include<iostream>
#include<cstdlib>
#include <ctime>  
using namespace std;

void imprimeValor();
int guardaValorDado();
void lanzaDado();

void imprimeValor(){
    //srand (time(NULL));
    int dado = rand() % 6 + 1;
    cout<<"El valor del dado es: "<<dado<<endl;
}

int guardaValorDado(){
    //srand (time(NULL));//sin semilla esta vez
    int dado = rand() % 6 + 1;
    return dado;
}

int main(){
    imprimeValor(); //Si solo queremos el valor de la cara que salio sin guardar
    int x = guardaValorDado();
    cout<<"El valor del dado guardado es : "<<x<<endl;
    int y;
    cout<<"Ingresa el numero de dados a utilizar"<<endl;
    cin>>y;
    
    for(int i =0; i<y; ++i){
        imprimeValor();
    }
}