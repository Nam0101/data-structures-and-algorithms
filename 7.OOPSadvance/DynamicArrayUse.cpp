#include <iostream>
#include "DynamicArray.cpp"
using namespace std;

int main(){
    DynamicArray d1;
    d1.add(0);
    d1.add(10);
    d1.add(100);
    d1.add(50);
    d1.add(501);
    d1.add(1991);
    d1.print();
    d1.get(2);
    cout<<d1.getCapacity()<<endl;

    DynamicArray d2(d1);
    DynamicArray d3(d2);
    d3=d1;
    d1.add(199,0);
    d1.print();
    d2.print();
    d3.print();
    DynamicArray d4(199);
    cout<<d4.getCapacity();
}