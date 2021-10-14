#include <iostream>
#include "student.cpp"
using namespace std;

int main(){
    Student s1; //static objects
    Student s2;

    //objects dynamically
    Student *s6= new Student;
    s1.age =24;
    s1.rollNumber =100;
    (*s6).age=100;
    s6->rollNumber=101;
    cout<<s1.age<<" "<<s1.rollNumber<<endl;
    cout<<s6->age<<" "<<s6->rollNumber<<endl;
    return 0;
}