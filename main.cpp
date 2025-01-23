#include "templatePoint.h"
#include <iostream>
using namespace std;

int main(){

    point<int> test1(1, 2);
    point<double> test2(1.5, 2.5);

    cout << "t1: ";
    test1.print(cout);
    cout << endl << "t2: ";
    test2.print(cout);
    cout << endl;
    funnyPoint<int> test3(4,5);
    test3.setFunny(90);

    cout << "t3: ";
    test3.print(cout);
    cout << endl;
    return 0;
}