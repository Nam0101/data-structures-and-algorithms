#include <iostream>
#include "student.cpp"
using namespace std;
int main(){
    Student s1;
    Student *s2=new Student;
    s1.setAge(29);
    s2->setAge(30);

    s1.display();
    s2->display();
    return 0;
}