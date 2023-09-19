#include <iostream>
using namespace std;

int main() {

    int i = 1;
    int j=1;

    while(1) {
        for (; j <= 20; j++) {
            if (i % j != 0) {
                break;
            }
        }
        if (j == 21) {//si llega a j==21 es porque es divisible de 1-20; j llego a iterar hasta 20
            break;
        }
        i++;
        j=1;
    }
    cout << i;


}
