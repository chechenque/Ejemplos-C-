#include<iostream>
using namespace std;

int main(){
    double x;
    
    do{
      cout<<"Ingresa un numero (cero para teerminar)";
      cin>>x;
      
      cout<<"Ingresaste el valor: "<< x<<"\n";  
    }while(x != 0);
    
    return 0;
}