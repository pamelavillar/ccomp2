#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    int suma = 0;
    int x =0;

    cout<<"Ingresa un numero:";
    cin>> n;

    x = n;

    while (n > 0) {
        suma = suma * 10 + (n % 10);
        n = trunc(n/10);
    }
    if (suma == x){
        cout<< «El numero es capicua»;
    }
    else{
        cout<< «El numero no es capicua»;
    }   

    return 0;

}