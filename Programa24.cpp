//
#include<iostream>
#include<math.h>
using namespace std;
#define N 64
    
float scal(int i, int n){
    return (((float) i) /(n-1));
}

float distancia(float x2, float x1){
    return sqrt((x2-x1)*(x2-x1));
}
    
int main(){
    float arreglo[N]={0.0f};
    const float ref = 0.5f;
    
    for(int i=0; i<N; ++i){
        float x=scal(i,N);
        arreglo[i]= distancia(x,ref);
        cout<<"La distancia de "<<ref<<" a "<<x<<" es "<<arreglo[i]<<endl;
    }
    
    return 0;         
}