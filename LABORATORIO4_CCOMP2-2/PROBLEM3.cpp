#include <iostream>
#include <cmath>
using namespace std;
//mcd
int main(){
    long long int n = 600851475143;
    long long int i = 2;
    while (i<= sqrt(n)) {//si i es mayor que la raiz de n, no puede ser factor primo, porque si lo fuera necesitaria otro factor primo menor que i, lo cual ya habria sido comprobado antes(100: 20x5)
        if(n % i == 0) {
            //cout << i << " ";
            n = n / i; // descomposicion del numero, se continua con el mismo i para la descomposicion
        }
        else {
            i++;
        }
    }
   cout<<"largest: "<<n;

}

