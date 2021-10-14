#include <iostream>
#include "student.cpp"
using namespace std;

int main(){
    Student s1(10,100);
    Student s2(20,200);

    Student *s3=new Student(30,300);
    *s3=s1;
    s2=s1;
    delete s3;
    return 0;
}