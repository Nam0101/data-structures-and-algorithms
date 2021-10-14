#include <iostream>
#include "student.cpp"
using namespace std;

int main(){
    Student s1(10,100);
    cout<<"s1 :";
    s1.display();

    Student s2(s1);
    cout<<"s2 :";
    s2.display();
    Student *s3 = new Student(20,200);
    cout<<"s3 :";
    s3->display();
    Student s4(*s3);
    cout<<"s4 :";
    s4.display();
    Student *s5 = new Student(*s3);
    cout<<"s5 :";
    s5->display();
    Student *s6 = new Student(s1);
    cout<<"s6 :";
    s6->display();

    return 0;
}
