#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int *ptr = &x;//declaracion de puntero, el asterisco no tiene funcion de indireccion

    //operador & (operador de direccion)
    cout<<ptr<<endl;//imprime direccion de memoria de x
    cout<<&x<<endl;
    cout<<&ptr<<endl;//imprime direccion del puntero


    //operador * (operador de indireccion)
    cout<<*ptr<<endl;//imprime el valor de x

    *ptr=1000;
    cout<<*ptr<<endl;
    cout<<x<<endl;
}