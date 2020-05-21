//
#include<iostream>
using namespace std;

int main(){
    char pregunta[]="Ingressa tu nombre";
    char saludo[]="Hola ";
    char nombre[50];
    
    cout<<pregunta<<endl;
    cin>>nombre;
    
    cout<<saludo<<nombre<<"!"<<endl;
    return 0;
}