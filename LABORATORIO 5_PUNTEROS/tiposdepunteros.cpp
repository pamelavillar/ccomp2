#include <iostream>
using namespace std;
#include "punto.h"


int main(){
    double var = 3.123;
    double *ptr = &var;
    cout<<*ptr<<endl;

    string cad = "ciencia";
    string *ptr1 = &cad;

    cout<< *ptr1 <<endl;
    cout<<cad.at(0)<<endl; //print c,se coloca . cuando es un objeto (cad)
    cout<<(*ptr1).at(0)<<endl; //print c
    cout<<ptr1->at(0)<<endl;//print c, se coloca flecha cuando es un puntero

    Punto p;
    p.setX(10);
    p.setY(20);
    p.print();

    //crea un puntero de tipo punto, hacer que dicho puntero apunte a p, modificar los valores de x y y, invoque a la funcion print usando puntero
    Punto *puntero = &p;
    (*puntero).setX(8);
    (*puntero).setY(6);
    (*puntero).print();

    Punto q;
    Punto *punt = &q;
    punt->setX(4);
    punt->setY(2);
    punt->print();
}  