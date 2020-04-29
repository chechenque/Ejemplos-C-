//Valor por default en una funcion
#include<iostream>
using namespace std;

int dividir(int a, int b=2){
    int r;
    r=a/b;
    return r;
}

int main(){
    cout<<dividir(16)<<endl;
    cout<<dividir(16,4)<<endl;
    return 0;
}