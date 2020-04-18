#include<iostream>
#include<string> //Biblioteca para utilizar cadenas o Strings
using namespace std;

int main(){
	string x; //declaramos nuestro String
	
	cout<<"Cual es tu nombre?"<<endl;
	
	getline(cin,x);//Obtenemos nuestra cadena o frase 
	
	cout<<"Hola "<<x<<endl; //Imprimimos nuestra cadena seguido de la frase
	
	cout<<"Cual es tu deporte favorito "<<x<<endl;
	
	getline(cin,x); //sobreescribimos nuestra variable x	
	
	cout<<"A mi tambien me gusta el "<<x<<" :)"<<endl;
	return 0;
	
}