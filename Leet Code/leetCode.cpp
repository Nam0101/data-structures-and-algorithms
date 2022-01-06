//1771 https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int numbersOfStudent(stack<int> sanwich, queue<int> student) {
    int n=sanwich.size();
    int k=0;
    while(true){
       int a=sanwich.top();
       int b=student.front();
       if(a==b && student.size()!=0 ){
           sanwich.pop();
           student.pop();
       }
       else{
           student.pop();
           student.push(b);
           //k++;
       }
       if(student.size()==0){
           return 0;
       }
       k++;
       if(k>10000){
           return student.size();
       }
    }
    return 0;
}

int main(){
    stack<int> sanwich;
    queue<int> student;
    sanwich.push(0);
    sanwich.push(1);
    sanwich.push(0);
    sanwich.push(1);
    sanwich.push(0);
    student.push(1);
    student.push(1);
    student.push(0);
    student.push(0);
    student.push(1);
    cout<<numbersOfStudent(sanwich, student)<<endl;
}

