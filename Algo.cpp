/**
* @author Luis Angel Leyva Castillo
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
	int x,y;
    string a,b;
    
	cout<<"Hola, como te llamas: \n"; //Imprimimos nuestra cadena
	getline(cin,a);
    
    cout<<"Hola "+a +" Cual es tu edad?"<<endl;
    getline(cin,b);
    
    cout<<"Tienes " + b +" que joven eres!"<<endl<< "Dame dos numero entero"<<endl;
    
	cin>>x; //solicitamos un entero
    cin>>y;
    
    cout<<"El numero multiplicado "<<y<<" veces es: "<< x*y << endl;
	
	
	return 0;
}