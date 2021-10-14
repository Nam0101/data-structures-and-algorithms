#include <iostream>
using namespace std;

class Student {
    static int totalStudent;
    public:
        int rollNumber;
        int age;
        static int totalStudent;
        Student(){
            totalStudent++;
        }
        static int getTotalStudent(){
            return totalStudent;
        }
};
int Student :: totalStudent=0;
