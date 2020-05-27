//Recursion
#include<iostream>
using namespace std;

int factorial(int x);
int cuadrados(int x);
int fibonacci(int x);
int potencia(int x, int y);


int factorial(int x){
    if(x == 1 || x == 0){
        return 1;
    } else {
        return x*factorial(x-1);
    }
}

int fibonacci(int x){
    if(x==0 || x==1){
        return 1;
    }else{
        return fibonacci(x-1) + fibonacci(x-2);
    }
}

int cuadrados(int x){
    if(x==1){
        return 1;
    }else{
        return (x*x) + cuadrados(x-1);
    }
}

int potencia(int x, int y){
    if(y == 0 && x !=0){
        return 1;
    }else{
        return x*potencia(x,y-1);
    }
}


int main(){
    cout<<factorial(4)<<endl;
    cout<<fibonacci(3)<<endl;
    cout<<cuadrados(2)<<endl;
    cout<<potencia(3,2)<<endl;
    return 0;
}
