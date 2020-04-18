#include<iostream>
using namespace std; 
#define pi 3.1415 //variable pi 
#define newline "\n" //salto de linea, un enter en un texto

int main(){
	double r=5.0; // definimos el radio con valor igual a 5
	double circle; //una nueva variable con nombre circle, es de punto decimal
	circle=2*pi*r; //le asignamos el valor que tomara circle
	cout<<circle; //Mostrar en terminal nuestro valor de circle
	cout<<newline; //Un enter para que se vea bonito
	
	return 0;
}