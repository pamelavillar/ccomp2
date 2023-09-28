#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

long sumarfor(const int arr[], const int tam){
    long sum=0;
    for(int i = 0; i < tam; sum += arr[i++]);
    return sum;
}
long sumarwhile(const int arr[], const int tam){
    long sum=0;
    int i=0;
    while(i<tam){
        sum+=arr[i++];
    }
    return sum;
}
//suma los elementos de manera recursiva
long sumarRec(const int arr[], const int tam){
    if(tam==0){
        return 0;
    }
    else{
        return arr[tam-1]+sumarRec(arr,tam-1);
    }
}

void imprimir(const int arr[], const int tam){
    for(int i = 0; i < tam; i++)
        cout<<" "<<arr[i];
    
}

void imprimirRec(const int arr[], const int tam,int i=0){//se coloca const arr porque no se modifican los valores del areglo
    cout<<"tam:"<<tam<<endl;
    cout<<"i:"<<i<<endl;
    if (tam==0){
        return;
    }
    else{
        
        cout<<arr[i]<<" ";
        imprimirRec(arr,tam-1,++i);  
    }
    
}

void intercambio(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
//void invertir con intercambio
void invertirRef(int arr[],const int tam){
    for (int i=0;i<tam/2;i++){
        intercambio(arr[i],arr[tam-i-1]);
    }
    
}

void invertir(int arr[],const int tam){//los arreglos por defecto son pasados por referencia
    for (int i=0;i<tam/2;i++){
        int tmp=arr[i];
        arr[i]=arr[tam-i-1];
        arr[tam-i-1]=tmp;
    }
    
}
void invertirRec(int arr[],const int tam,int i=0){
    if (i>=tam){
        return;
    }
    intercambio(arr[i],arr[tam-1]); 
    invertirRec(arr,tam-1,i++);    
}
int main(){
    const int tam=4;
    int arr[tam]={5,6,3,1};

    
    //cout<<"La suma es "<<sumarfor(arr,tam)<<endl;
    cout<<"El arreglo es ";
    imprimirRec(arr,tam);

    //invertir(arr,tam);
    invertirRef(arr,tam);
    //invertirRec(arr,tam);
    imprimir(arr,tam);

 
    return 0;
}