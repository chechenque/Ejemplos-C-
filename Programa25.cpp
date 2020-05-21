//
#include<iostream>
#include<math.h>
using namespace std;
#define N 6

float scal(int i, int n){
    return (((float)i)/(n-1));
}

float distancia(float x1,float x2){
    return sqrt((x2-x1)*(x2-x1));
}

void distanciaArreglo(float *particion, float *arreglo,float ref,int n){
    for(int i=0; i<n; ++i){
        arreglo[i]=distancia(particion[i],ref);
    }
}

int main(){
    float arreglo[N]={0.0f};
    float particion[N]={0.0f};
    
    const float ref = 0.5f;
    
    for(int i = 0; i<N; ++i){
        particion[i]=scal(i,N);
    }
    
    distanciaArreglo(particion,arreglo,ref,N);
    
    for(int j=0;j<N;++j){
        cout<<"La distancia de la referencia "<<ref<<" a "<<particion[j]<<" es "<<arreglo[j]<<endl;
    }
    
    return 0;
}