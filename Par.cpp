/**
* @desc Un programa que dice si un numero es par o no
* @author Luis Angel Leyva Castillo
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
	int x;
    string a,b,c;
    
	cout<<"Introduce un valor entero: "<<endl; //Imprimimos nuestra cadena
	
	cin>>x; //solicitamos un entero
	
	c = (x%2 == 0)? a:b;
    
    cout<<c<<endl;
	
	
	return 0;
}