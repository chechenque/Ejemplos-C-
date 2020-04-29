#include<iostream>
using namespace std;

int maximoComunDivisor(int a, int b);

int minimoComunMultiplo(int a, int b);

int maximoComunDivisor(int a, int b){
    if(a==0) return b;
    else if(b==0) return a;
    int z = a%b;
    return maximoComunDivisor(b,z);
}

int minimoComunMultiplo(int a, int b){
    return a*b/maximoComunDivisor(a,b);
}

int main(){
    cout<<"El mcd de 2 y 9 es: "<<maximoComunDivisor(2,9)<<endl;
    cout<<"El mcm de 2 y 9 es: "<<minimoComunMultiplo(2,9)<<endl;
}