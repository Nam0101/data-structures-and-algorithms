#include<iostream>
using namespace std;

template<typename T>
class Node{
   public:
       T data;
       Node<T>* next;
       Node(T data){
         this->data = data;
         next = NULL;
       }
};

template<typename T>
class Queue{
    Node<T>* head;
    Node<T>* tail
    int size;
    
  public:
    Queue(){
        head = NULL;
        tail = NULL;
        size = 0;
    }
    int getSize(){
    
    }
    bool isEmpty(){
    
    }
    void push(T ele){
    
    }
    T front(){
    
    }
    void pop(){
    
    }
};
int main(){
 Queue<int> q;
 q.push(10);
 q.push(20);
 q.push(30);
 q.push(40);
 q.push(50);
 q.push(60);
 q.push(70);
 cout<<q.front()<<endl;
 q.pop();
 q.pop();
 q.pop();
 cout<<q.front()<<endl;
 cout<<q.getSize()<<endl;
 cout<<q.isEmpty()<<endl;
 q.push(60);
 q.push(70);

 q.pop();
 q.pop();
 cout<<q.front()<<endl;
 cout<<q.getSize()<<endl; 
   return 0;
}