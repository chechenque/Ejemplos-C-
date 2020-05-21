//
#include<iostream>
using namespace std;

int main(){
    int x = 7, y=21;
    int * ap1, * ap2;
    
    ap1= &x;
    ap2 = &y;
    
    ap1=ap2;
    *ap1=1;
    
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    return 0;
}