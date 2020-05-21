//
#include<iostream>
using namespace std;

int main(){
    int x,y;
    int * apuntador;
    
    apuntador=&x;
    *apuntador=7;
    
    apuntador=&y;
    *apuntador=21;
    
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    
    return 0;
}