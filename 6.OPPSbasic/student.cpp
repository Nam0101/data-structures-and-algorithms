#include <iostream>
using namespace std;
class Student {
    int age;
    
    public:
        Student(){
            cout<<"Constructors called"<<endl;
        }
        Student(int rollNumber){
            cout<<"Constructors 2 called"<<endl;
            this->rollNumber=rollNumber;
        }
        Student(int a,int r){
            this->age=a;
            rollNumber=r;
        }
        int rollNumber;
        void display(){
            cout<<age<<" "<<rollNumber<<endl;
        }
        int getAge(){
            return age;
        }
        void setAge(int a){
            age = a;
        }
        ~Student(){
            cout<<"Destructor called"<<endl;
        }

};