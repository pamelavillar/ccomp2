#include <iostream>
#include <string>
using namespace std;

int main(){
    int n=13195;
    int i=2;
    while (i<13195){
        if(n%i==0){
            cout<<i;
            n=n/i;
        }
        else{
           i++;
        }
        
    }
}
