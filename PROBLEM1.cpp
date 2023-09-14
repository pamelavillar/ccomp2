#include <iostream>
#include <string>
using namespace std;

int main(){
    int suma=0;
    int multiplo=1;

    for(int i=1;i<1000;i++){
        if (i%3==0 ||i%5==0){
            cout<<i<<endl;
            suma+=i;
            }
        }
    cout<<"suma: "<<suma;
}
