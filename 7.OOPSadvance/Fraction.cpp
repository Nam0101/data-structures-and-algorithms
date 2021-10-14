#include <iostream>
using namespace std;

class Fraction{
    private:
        int numerator;
        int denominator;
    public:
        Fraction(){
            
        }
        Fraction(int numerator, int denominator){
            this->numerator = numerator;
            this->denominator = denominator;
        }
        void print() const{
            cout<<numerator<<"/"<<denominator<<endl;
        }
        int getNumerator() const {
            return numerator;
        }
        int getDenominator() const {
            return denominator;
        }
        void setNumerator(int numerator){
            this->numerator = numerator;
        }
        void setDenominator(int denominator){
            this->denominator = denominator;
        }
        void add(Fraction const &f2){
            int Ntemp,Dtemp;
            Dtemp=this->denominator*f2.denominator;
            Ntemp=this->numerator*f2.denominator+f2.numerator*this->denominator;
            this->numerator=Ntemp;
            this->denominator=Dtemp;
        }
        Fraction operator +(Fraction const &f2){
            int Ntemp,Dtemp;
            Dtemp=this->denominator*f2.denominator;
            Ntemp=this->numerator*f2.denominator+f2.numerator*this->denominator;
            // this->numerator=Ntemp;
            // this->denominator=Dtemp;
            Fraction fnew(Ntemp,Dtemp);
            // fnew.simplify();
            return fnew;
        }
        Fraction operator *(Fraction const &f2) const {
            int n=numerator*f2.numerator;
            int d=denominator*f2.denominator;
            Fraction fnew(n,d);
            // fnew.simplify();
            return fnew;
        }
        void multiply(Fraction const &f2){
            numerator=numerator*f2.numerator;
            denominator=denominator*f2.denominator;
            Fraction fnew(numerator,denominator);
        }
        bool operator ==(Fraction const &f2) const{
            return (numerator == f2.numerator && denominator == f2.denominator);
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
            this->numerator=this->numerator/gcd;
            this->denominator=this->denominator/gcd;
        }
        Fraction& operator ++(){
            numerator=numerator+=denominator;
            return *this;
        }
        //// post increment
        Fraction operator ++(int){
            Fraction fnew(numerator,denominator);
            numerator=numerator+denominator;

            return fnew;

        }
        Fraction& operator +=(Fraction const &f2){
            int Ntemp,Dtemp;
            Dtemp=this->denominator*f2.denominator;
            Ntemp=this->numerator*f2.denominator+f2.numerator*this->denominator;
            this->numerator=Ntemp;
            this->denominator=Dtemp;
            return *this;
        }
};

