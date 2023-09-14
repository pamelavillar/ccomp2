#include <iostream>
#include <string>
using namespace std;

int main(){
    int n=0;
    int contador=0;
    cout<<"Ingrese un numero: "<<endl;
    cin>>n;

    for (int i=2 ; i<n ; i++){
        for (int j=1; j<=i; j++){
            if (i%j==0){          
                contador++;
            }
        }
        if (contador==2){
            cout<<i<<endl;
        }
        contador=0;
    }
}