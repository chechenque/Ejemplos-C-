#include<iostream>
using namespace std;

int x;
int main(){
    
    cout<<"Introduce un numero entero mayor a cero."<<endl;
    cin>>x;
    
    while(x> 0){
        cout<<x<<", ";
        x=x-1;
    }
    
    cout<<"Fin \n";
    
    return 0;
}