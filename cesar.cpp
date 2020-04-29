#include<iostream>
#include<string>
#include<cmath>
using namespace std;
//g++ cesar.cpp -o cesar

/**
* Funcion encriptadora
* texto El texto a encriptar
* llave Numero de desplazamientos
*/
string encriptar(string texto,int llave);

/**
* Funcion desencriptadora
* texto El texto a desencriptar
* llave Numero de desplazamientos
*/
string desencriptar(string texto,int llave);

bool contiene(string texto, char letra);

int posicion(char letra, string texto);

//string ALPHABET_MINUS = "abcdefghijklmnñopqrstuvwxyz";
//string ALPHABET_MAYUS = "ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";

string ALPHABET_MINUS = "abcdefghijklmnopqrstuvwxyz";
string ALPHABET_MAYUS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

bool contiene(string texto, char letra){
    for(int i = 0; i< texto.length(); ++i){
        if(texto.at(i)==letra) return true;
    }
    return false;
}

int posicion(char letra, string texto){
    for(int i = 0; i<texto.size(); ++i){
        if(texto.at(i)==letra) return i;
    }
    return -1;
}

string encriptar(string texto,int llave){
    string criptograma = "";
    
    for(int i = 0; i<texto.size(); ++i){
        if(contiene(ALPHABET_MINUS,texto.at(i)) || contiene(ALPHABET_MAYUS,texto.at(i))){
            
            char simbolo;
            
            if(contiene(ALPHABET_MINUS,texto.at(i))){
                int x = posicion(texto.at(i),ALPHABET_MINUS);
                int secreto = (x+llave) % ALPHABET_MINUS.size();
                simbolo = ALPHABET_MINUS.at(secreto);
            }else{
                int x = posicion(texto.at(i),ALPHABET_MAYUS);
                int secreto = (x+llave) % ALPHABET_MAYUS.size();
                simbolo = ALPHABET_MAYUS.at(secreto);
            }
            criptograma = criptograma+simbolo;
        }else{
            criptograma = criptograma + texto.at(i);
        } 
    }
    return criptograma;
}

string desencriptar(string texto,int llave){
    string desencriptado = "";
    
    for(int i = 0; i<texto.size(); ++i){
        if(contiene(ALPHABET_MINUS,texto.at(i)) || contiene(ALPHABET_MAYUS,texto.at(i))){
            
            char simbolo;
            
            if(contiene(ALPHABET_MINUS,texto.at(i))){
                int x = posicion(texto.at(i),ALPHABET_MINUS);
                int secreto = fmod(x-llave,ALPHABET_MINUS.size());
                simbolo = ALPHABET_MINUS.at((ALPHABET_MINUS.size()+secreto)%ALPHABET_MAYUS.size());
            }else{
                int x = posicion(texto.at(i),ALPHABET_MAYUS);
                int secreto = (x-llave)%ALPHABET_MINUS.size();
                simbolo = ALPHABET_MAYUS.at((ALPHABET_MAYUS.size()+secreto)%ALPHABET_MAYUS.size());
            }
            desencriptado = desencriptado+simbolo;
        }else{
            desencriptado = desencriptado + texto.at(i);
        } 
    }
    return desencriptado;
}

int main(){
    string texto;
    int llave;
    getline(cin,texto);
    cin>>llave;
    //cout<<desencriptar(texto,llave)<<endl;
    //cout<<encriptar(texto,llave)<<endl;
    return 0;
}