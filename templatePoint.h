#include <iostream>
using namespace std;
#pragma once

template<class itemType>
class point{
    private:
        itemType x,y;
    public:
        point(itemType inX, itemType inY){
            x = inX;
            y = inY;
        }
        //point(const point<itemType>& inO);
        itemType getX() const{
            return x;
        }
        itemType getY() const{
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

template<class itemType>
class funnyPoint : public point<itemType>  {
    private:
        int funnyValue;
    public:
        funnyPoint(itemType inX, itemType inY){
            
        }
        void setFunny(int nfunnyValue){
            funnyValue = nfunnyValue;
        }
        void print(ostream& out) override{
            out << "Funny: " << funnyValue;
            out << "  Point: " << getX() << "," << getY(); 
        }


};