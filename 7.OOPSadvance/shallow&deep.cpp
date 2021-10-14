#include <iostream>
#include <cstring>
using namespace std;

class Student{
    int age;
    public:
        char *name;
        Student(Student const &s){
            this->age = s.age;
            // this->name = s.name;//shallow coppy
            // deep coppy 
            this->name = new char[strlen(s.name) + 1];
            strcpy(this->name,s.name);
        }
        Student(int age,char *name){
            this->age = age;
            // this->name = name; shallow coppy
            this->name = new char[strlen(name)+1];//deep coppy
            strcpy(this->name,name);
        }
        void display(){
            cout << name<<" "<<age<<endl;

        }
};

int main(){
    char name[]="abcd";
    Student s1(20,name);
    s1.display();
    Student s2(s1);
    s2.name[0]='x';
    s1.display();
    s2.display();
    /*name[3]='e';
    Student s2(20,name);
    s2.display();
    s1.display();*/
}