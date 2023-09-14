#include <iostream>
#include <string>
using namespace std;

int main(){
    int n=0;
    int p=0;
    int s=1;
    int aux=0;
    cout<<"Ingrese un numero: ";
    cin>>n;
    for (int i=0; i<n ;i++){
        aux=p+s;
        cout<<aux<<" ";
        p=s;
        s=aux;
        aux=0;      

    }
}