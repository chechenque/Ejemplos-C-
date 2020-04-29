//go-to loop
#include<iostream>
using namespace std;

int main(){
    int x;
    
    cout<<"Introduce un entero mayor a cero \n";
    cin>>x;
    
    ciclo:
    cout<<x<<", ";
    x=x-1;
    
    if(x>0) goto ciclo;
    
    cout<<"\n";
    
    return 0;
}