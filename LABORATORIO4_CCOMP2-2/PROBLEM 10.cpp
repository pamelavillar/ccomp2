#include <iostream>
#include <string>
using namespace std;

int main(){
    int n=2000000;
    int contador=0;
    long long int suma=0;

    for (int i=2 ; i<n ; i++){
        for (int j=1; j<=i; j++){
            if (i%j==0){          
                contador++;
            }
        }
        if (contador==2){
            //cout<<i<<endl;
            suma+=i;
        }
        contador=0;
    }
    cout<<suma<<endl;
}