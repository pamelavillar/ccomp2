#include <iostream>
using namespace std;

int main() {
    int palindrome = 0;
    int producto=0,numero=0, alreves=0;

    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            producto = i * j;
            numero = producto;
            alreves = 0;
            
            while (numero > 0) {
                int last = numero % 10;
                alreves = alreves * 10 + last;
                numero=numero/10;
            }

            if (producto == alreves && producto > palindrome) {
                palindrome = producto;
            }
        }
    }

    cout <<palindrome << endl;


}
