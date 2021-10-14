#include <iostream>
using namespace std;

class Student{
    public:
        int age;
        int const rollNumber;
        int &x; //age reference var

        Student(int r,int age): rollNumber(r),age(age),x(this->age){
            // rollNumber=r;
        }
};