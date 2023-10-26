#ifndef __GEOMETRIC_VECTOR_H__
#define __GEOMETRIC_VECTOR_H__
#include <iostream>
#include "Point.h"
#include <cmath>
using namespace std;

class GeometricVector{
    private:
        Point start;
        Point end;
    public:
        GeometricVector( Point start,Point end){
            this->start =start;
            this->end =end;
        }
        ~GeometricVector(){
            cout<<"GeometricVector:Invoca destructor"<<endl;
        }
        double modulo()const{
            return sqrt(pow((end.getX()-start.getX()),2)+pow((end.getY()-start.getY()),2));
        }
        void setStart(Point start){
            this->start=start;
        }
        void setEnd(Point end){
            this->end=end;
        }
        Point getStart()const{
            return start;
        }
        Point getEnd()const{
            return end;
        }
};
#endif