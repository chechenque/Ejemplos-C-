//Recusividad con el calculo del factorial
#include<iostream>
using namespace std;

long double factorial(long a);

int main(){
    long numero;
    cout<<"Ingresa un numero entero positivo: \n";
    cin>>numero;
    
    cout<<numero<<"!= "<<factorial(numero)<<endl;
    return 0;
}

long double factorial(long a){
    if(a>1){
        return(a*factorial(a-1));
    }else{
        return 1;
    }
}