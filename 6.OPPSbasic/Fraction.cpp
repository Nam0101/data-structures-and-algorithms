#include <iostream>
using namespace std;

class Fration{
    private:
        int numerator;
        int denominator;
    public:
        Fration(int numerator, int denominator){
            this->numerator = numerator;
            this->denominator = denominator;
        }
        void print(){
            cout<<numerator<<"/"<<denominator<<endl;
        }
        void add(Fration const &f2){
            int Ntemp,Dtemp;
            Dtemp=this->denominator*f2.denominator;
            Ntemp=this->numerator*f2.denominator+f2.numerator*this->denominator;
            this->numerator=Ntemp;
            this->denominator=Dtemp;
        }
        void multiply(Fration const &f2){
            numerator=numerator*f2.numerator;
            denominator=denominator*f2.denominator;
        }
        void simplify(){
            int gcd=1;
            int j=min(this->numerator,this->denominator);
            for(int i=1;i<=j;i++){
                if(numerator %i==0 && denominator %i==0){
                    gcd=i;
                }
                this->numerator=this->numerator/gcd;
                this->denominator=this->denominator/gcd;
            }
        }
};

int main(){
    Fration f1(10,2);
    Fration f2(15,4);

    f1.add(f2);
    f1.print();
    f2.print();
    f1.multiply(f2);
    f1.print();
    f2.print();
}