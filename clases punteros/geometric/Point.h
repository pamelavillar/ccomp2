#ifndef __POINT_H__
#define __POINT_H__
#include <iostream>
using namespace std;

class Point{
    private:
        int x,y;
    public:
        Point(int x=0,int y=0){
            this->x =x;
            this->y =y;
        }
        ~Point(){
            cout<<"POINT:Invoca destructor"<<endl;
        }
        void setX(int x){
            this->x=x;
        }
        void setY(int y){
            this->y=y;
        }
        int getX()const{
            return x;
        }
        int getY()const{
            return y;
        }
};
#endif