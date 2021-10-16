#include <iostream>
using namespace std;

template<typename T>
class Stack{
   T *arr;
   int nextIndex;
   int capacity;

   public:
       Stack(){
          capacity = 4;
          arr = new T[capacity];
          nextIndex = 0;
       }
       /// return no of elements present in stack
       int size(){
          return nextIndex;
       }
       bool isEmpty(){
         /*if(nextIndex==0){
            return true;
         }else{
            return false;
         }*/
         return nextIndex==0;
       }
    void push(T ele){
        if(nextIndex==capacity){
            T *newArr = new T[2*capacity];
            for(int i=0;i<capacity;i++){
                newArr[i] = arr[i];
            }
            delete []arr;
            arr = newArr;
            capacity = 2*capacity;
          }
          arr[nextIndex] = ele;
          nextIndex++;
       }
       void pop(){
          if(isEmpty()){
            cout<<"Stack empty"<<endl;
            return;
          }
          nextIndex--;
       }
       T top(){
         if(isEmpty()){
            cout<<"Stack empty"<<endl;
            return 0;
          }
         return arr[nextIndex-1];
       }
};

int main(){
    Stack<char> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);

    cout<<s.top()<<endl;
    s.pop();

    cout<<s.top()<<endl;
    s.pop();

    cout<<s.top()<<endl;
    s.pop();

    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}
