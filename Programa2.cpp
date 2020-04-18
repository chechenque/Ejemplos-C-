#include<iostream>
using namespace std; 

int main(){
	int a,b,c; //declaramos nuestras variables a, b, c del tipo entero
	float d,e; //declaramos nuestras variables d, e de tipo float (punto decimal)
	
	a=10; //asignamos el valor de 10 a "a"
	b=21; //asignamos el valor de 21 a "b"
	
	c=(a>b)? a:b; //asginamos el valor a c, el cual sera el valor mas grande entre a y b 	
	cout<<c<<endl; //lo imprimimos en pantalla
	
	d=sizeof(int); //asignamos el tamanno de un entero en d 
	e=sizeof(float); //asignamos el tamanno de un float en e
	
	cout<<"El tamanno del int es "<<1.0/2<<" bytes"<<endl; //imprimimos de forma elegante el tamanno de un entero
	cout<<"El tamanno del float es "<<e<<" bytes"<<endl; //imprimimos de forma elegante el tamanno de un float
    cout<<"El tamanno del short es "<<sizeof(short)<<" bytes"<<endl; //imprimimos de forma elegante el tamanno de un float
    cout<<"El tamanno del long es "<<sizeof(long)<<" bytes"<<endl; //imprimimos de forma elegante el tamanno de un float
    cout<<"El tamanno del double es "<<sizeof(double)<<" bytes"<<endl; //imprimimos de forma elegante el tamanno de un float
    cout<<"El tamanno del bool es "<<sizeof(bool)<<" bytes"<<endl; //imprimimos de forma elegante el tamanno de un float
	cout<<"El tamanno del char es "<<sizeof(char)<<" bytes"<<endl; //imprimimos de forma elegante el tamanno de un float
	return 0;
}