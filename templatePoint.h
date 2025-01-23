#include <iostream>
using namespace std;
#pragma once

template<class itemType>
class point{
    public:
        itemType x,y;
    private:
        point(itemType inX, itemType inY){
            x = inX;
            y = inY;
        }
        //point(const point<itemType>& inO);
        itemType getX(){
            return x;
        }
        itemType getY(){
            return y;
        }
        void setX(itemType newX){
            x = newX;
        }
        void setY(itemType newY){
            y = newY;
        }
        void print(ostream& out){
            out << x << "," << y;
        }

};