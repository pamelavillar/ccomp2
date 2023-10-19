#include <iostream>
using namespace std;

int main(){
    int arr[] = {14,2,3,4,5,6};
    int tam = sizeof(arr)/sizeof(arr[0]); //imprime numero de elementos de arreglo
    cout<<tam<<endl;

    int *ptr = arr;//puntero a primer elemento del arreglo
    cout<<*arr<<endl;//print 1
    cout<<arr<<endl; // print direccion
    cout<<&arr[0]<<endl; // print direccion

    cout<<*(ptr+0)<<endl;//print 14
    cout<<*(ptr+1)<<endl; //print 2
    
    for (int i=0; i<tam;i++){
        cout<<*(ptr+i)<<",";
    }
}