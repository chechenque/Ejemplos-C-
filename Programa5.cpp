//Convertir una cadena a valor numerico
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    string x;
    float precio = 0;
    int cantidad = 0;
    
    cout<<"Ingresa el precio: "<<endl;
    getline(cin,x);
    stringstream(x)>>precio;
    
    cout<<"Ingresa la cantidad de producto: "<<endl;
    getline(cin,x);
    stringstream(x)>>cantidad;
    
    cout<<"El precio total es "<<precio*cantidad<<"."<<endl;
    
    return 0;
}