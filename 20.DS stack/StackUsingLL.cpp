#include <iostream>
using namespace std;
template <typename T>
class Node{
    T data;
    Node* next;
    public:
        Node(T data){
            this->data;
            next=NULL;
        }
};
template <typename T>
class Stack{
    Node<T> *head;
    int size;
    public:
        Stack(){
            head=NULL;
            size=0;
    }
    int getsize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    void push(T ele){
        Node<T> *n=new Node(ele);
        n->next=head;
        head=n;
        size++;
    }
    void pop(){

    }
    T top(){

    }
};
int main(){
    Stack<int> s;
}