#include <iostream>
#include <string>
using namespace std;

int main(){

    int p=0;
    int s=1;
    int aux=0;
    int suma=0;

    while (aux<4000000){
        aux=p+s;
        p=s;
        s=aux;
        if (aux%2==0){
            suma+=aux;
        }

    }
    cout<<suma;
}