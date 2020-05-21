//
#include<iostream>
using namespace std;

int main(){
    int A[5];
    int * ap;
    
    ap=A;
    
    *ap=1;
    
    ap=ap+1;
    *ap=2;
    
    ap=&A[2];
    
    *ap=3;
    
    ap=A+3;
    *ap=4;
    
    ap=A;
    *(ap+4)=5;
    
    for(int i=0; i<5; ++i){
        cout<<A[i]<<", ";
    }
    cout<<endl;
    return 0;
}