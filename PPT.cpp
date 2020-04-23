//Piedra, papel o tijera
#include<iostream>
#include<cstdlib>
#include <ctime>  
using namespace std;

int main(){
    srand (time(NULL));
    bool continuar = true;
    int ruleta = rand() % 3 + 1;
    string a,b,c,d;
    int x;
    
    a = "Bienvenido a piedra, papel o tijera: \nteclea 1 para elegir Piedra \n";
    b = "teclea 2 para elegir Papel \nteclea 3 para elegir Tijera \n";
    c = "teclea 0 para terminar \n";
    cout<<a<<b<<c;
    cin>>x;
    while(continuar){
        if(x == 0) break; //en vez de break pudimos usar continuar = false y terminaba el ciclo o bucle
        else if ((x==1 && ruleta == 3) || (x==2 && ruleta == 1) || (x==3 && ruleta == 2) ){
            cout<<"Ganaste"<<endl;
        }else if (x==ruleta){
            cout<<"Empate"<<endl;
        }else {
            cout<<"Perdiste"<<endl; 
        }
        cin>>x;
        ruleta = rand() % 3 + 1;
    }
    cout<<"adios"<<endl;
    return 0;
}