#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> student;
    student.push(1);
    student.push(2);
    student.push(3);
    student.push(4);
    student.pop();
    cout<<student.front()<<endl;
}