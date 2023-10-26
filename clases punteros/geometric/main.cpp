#include <iostream>
#include "Point.h"
#include "GeometricVector.h"
using namespace std;

int main(){
    Point Point1(0,0);
    Point Point2(4,3);

    GeometricVector Geometric(Point1,Point2);
    cout<<Geometric.modulo()<<endl;
    return 0;
}