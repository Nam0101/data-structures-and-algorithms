#include <iostream>
#include "Fraction.cpp"
using namespace std;

int main(){
    Fraction f1(10,3);
    Fraction f2(5,2);
    // f1+=f2;
    
    (f1+=f2)+=f2;
    f1.print();
    f2.print();
    /*Fraction f3=f1++;
    f1.print();
    f3.print();
    // Fraction f3=f1+f2;
    // Fraction f4=f1*f2;
    // bool a=f1==f2;
    /*f1.print();
    f2.print();
    f3.print();
    f4.print();*/
    /*Fraction f3=++(++(f1));
    f1.print();
    f3.print();
    // Fraction f5=++f1;
    // f5.print();
    // cout<<a<<endl;*/
}