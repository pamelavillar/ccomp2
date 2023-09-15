#include <iostream>
using namespace std;

int main(){
    long long int n = 600851475143;
    long long int i = 2;
    while (i * i <= n) {
        if(n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
        else {
            i++;
        }
    }
    if (n > 1) {
        cout << n;
    }

}

