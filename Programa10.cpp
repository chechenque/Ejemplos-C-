//Introduccion a funciones
#include<iostream>
using namespace std;

int suma(int x, int y){
  return x+y;  
}

int main(){
    int x,y,z;
    
    cout<<"Ingressa el primer numero entero"<<endl;
    cin>>x;
    
    cout<<"Ingresa el segundo numero entero"<<endl;
    cin>>y;
    
    z=suma(x,y);
    
    cout<<"La suma de "<<x<<" + " << y <<" es "<<z<<endl;
    return 0;
}