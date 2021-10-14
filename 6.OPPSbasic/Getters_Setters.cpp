#include <iostream>
#include "student.cpp"
using namespace std;

int main(){
    Student s1; //static objects
    Student s2;

    //objects dynamically
    Student *s6= new Student;
    cout<<"S1 age "<<s1.getAge()<<endl;
    cout<<"S2 age "<<s2.getAge()<<endl;
    
    s1.rollNumber =100;
    // (*s6).age=100;
    s6->display();
    s6->rollNumber=101;
    // cout<<s1.age<<" "<<s1.rollNumber<<endl;
    // cout<<s6->age<<" "<<s6->rollNumber<<endl;
    return 0;
}