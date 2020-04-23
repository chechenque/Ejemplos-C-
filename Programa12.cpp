//Ejemplos de trabajo de memoria.
#include<iostream>
using namespace std;

void anterior_siguiente(int x,int &y,int &z);

int main(){
    int x,y,z;
    cout<<"Ingresa un valor entero: \n";
    cin>>x;
    
    anterior_siguiente(x,y,z);
    
    cout<<"El valor anterior es "<<y<<" y el valor siguiente es "<<z<<endl;
    
    return 0;
}

void anterior_siguiente(int x, int &y, int &z){
    y = x-1;
    z = x+1;
}