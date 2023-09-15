#include <iostream>
using namespace std;

int main() {

    int j = 1;
    int i = 1;

    for (;;) {
        for (; j <= 20; j++) {
            if (i % j != 0) {
                break;
            }
        }
        if (j == 21) {
            break;
        }
        i++;
        j = 1; 
    }
    cout << i;


}
