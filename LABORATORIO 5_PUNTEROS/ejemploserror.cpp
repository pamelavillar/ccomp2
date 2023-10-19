#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int *ptr = x; //  ERROR NO SE PUEDE ASIGNAR UN ENTERO, CORRECION (&x)

    int *ptr; //puntero no inicializado
    *ptr=100; //el puntero no puede asignar valor, porque no tiene una direccion de memoria asignada


}