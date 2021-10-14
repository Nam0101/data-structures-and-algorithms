#include <iostream>
using namespace std;

class ComplexNumber{
    private:
        int real,imaginary;
    public:
        ComplexNumber(int real,int imaginary){
            this->real = real;
            this->imaginary = imaginary;
        }
        void print(){
            cout << real <<"+"<<imaginary<<"i"<<endl;
        }
        void add(ComplexNumber const &c2){
            this->real=this->real+c2.real;
            this->imaginary=this->imaginary+c2.imaginary;
        }
        void multiply(ComplexNumber const &c2){
            int rTemp,iTemp;
            rTemp=(real*c2.real)-(imaginary*c2.imaginary);
            iTemp=(real*c2.imaginary)+(imaginary*c2.real);
            real=rTemp;
            imaginary=iTemp;
        }

};

int main(){
    ComplexNumber c1(3,4);
    ComplexNumber c2(5,6);
    c1.print();
    c2.print();
    // c1.add(c2);
    c1.print();
    c1.multiply(c2);
    c1.print();

}