#include <iostream>
using namespace std;

int main() {
    int palindrome = 0;
    int producto=0,numero=0;

    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            producto = i * j;
            numero = producto;
            int alreves = 0;
            
            while (numero > 0) {
                alreves = alreves * 10 + (numero % 10);
                numero=numero/10;
            }

            if (producto == alreves && producto > palindrome) {//compruebbo que sea palindrome y sea mayor que el anterior palindrome
                palindrome = producto;
            }
        }
    }

    cout <<palindrome << endl;



}
