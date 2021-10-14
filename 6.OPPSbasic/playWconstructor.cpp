#include <iostream>
#include "student.cpp"
using namespace std;

int main(){
    Student s1;
    Student s2(100);
    Student s3(10,100);

    Student s4(s3);

    s1=s2;

    Student s5 =s3;
    return 0;
}