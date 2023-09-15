#include <iostream>
using namespace std;

int main() {
    int suma1=0;
    int suma2=0;
   
    for (int i=1;i<=100;i++) {
        suma1=suma1+(i*i);
    }
    
    for (int i=1;i<=100;i++) {
        suma2=suma2+i;
    }
   

    cout << suma2*suma2-suma1;


}
