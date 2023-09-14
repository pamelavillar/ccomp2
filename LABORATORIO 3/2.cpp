#include <iostream>
#include <string>
using namespace std;

int main(){
    int n=0;
    int e=0;
    int suma=0;
    cout<<"Ingrese un numero: ";
    cin>>n;
    

    int i=1;
    while(e<n){
        for (int j=1; j<i; j++){
            if (i%j == 0){
                suma=suma+j;
            }
        }
        if (suma==i){
            cout<<i<<": es numero perfecto"<<endl;
            e++;
        }
        suma=0;
        i++;
    }
}