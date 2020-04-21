//Ciclo For
//Para ejecutar y guardar en un archivo hacer lo siguiente
//./<Nombre del ejecutable> < <Archivo con los parametross a usar> > <Archivo a guardar>
//Ejemplo:
//./Programa8 < Parametros.txt > Guardado.txt
#include<iostream>
using namespace std;

int x;

int y;

int main(){
    cout<<"Ingresa un numero entero para comenzar"<<endl;
    cin>>x;
    
    cout<<"Ingresa un numero entero para terminar"<<endl;
    cin>>y;
    
    for(int i=x; i > 0; --i){
        if(i==y){
            cout<<"FIN"<<endl;
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}