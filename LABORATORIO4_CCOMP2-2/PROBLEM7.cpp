#include <iostream>
using namespace std;

int main()
{
    
    int pn = 1; 
    int i = 2; 

    while (pn < 10001)
    {
        int j = 2; 
        while (i % j != 0){
            j++; 
        }
        if (j == i){
            pn++;
        }
        i++;
    }

    cout << "El 10001 número primo es: " << i << endl;

}
