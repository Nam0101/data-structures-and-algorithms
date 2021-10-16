#include <iostream>
using namespace std;
class Node {
    public:
        int data;
        Node *next;
        Node(int data){
            this->data = data;
            next=NULL;
        }
};
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout << temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

Node *takeInput(){
    int data;
    cin >> data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data != -1){
        Node *n= new Node(data);
        if(head == NULL){
            head=n;
            tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
        cin>>data;
    }
    return head;
}
int length(Node *head){
    int count;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
void printAt(Node *head,int n){
    if(n<0 || n>length(head)){
        cout<<"-1"<<endl;
        return;
    }
    else{
        for(int i=0;i<n,head!=NULL;i++){
            head=head->next;
        }
        cout<<head->data<<endl;
    }
}
Node* insertAt(Node *head,int i,int data){
    if(i<0){
        return head;
    }
    if(i==0){
        Node *n= new Node(data);
        n->next=head;
        head=n;
        return head;
    }
    Node *temp=head;
    int count=1;
    while(count<=i-1 && head!=NULL){
        head= head->next;
        count++;
    }
    if(head){
        Node *n= new Node(data);
        n->next=head->next;
        head->next=n;
        return temp;
    }
    return temp;
}
Node *deleteAt(Node *head,int i){
    if(i<0 || i>length(head)){
        return head;
    }
    if(i==0){
        head=head->next;
        return head;
    }
    if(i==length(head)){
        for(int a=0;a<length(head)-1;a++){
            head=head->next;
        }
        head->next=NULL;
    }
    Node *temp=head;
    int count=1;
    while(count<=i-1 && head!=NULL){
        head=head->next;
        count++;
    }
    head->next=head->next->next;
    return temp;
}
Node *merge2LinkedList(Node *l1,Node *l2){
    if(l1==NULL) return l2;
    if(l2==NULL) return l1;
    Node *final=NULL;
    if(l1->data < l2->data){
        final=l1;
    }
    else{
        final=l2;
    }
    Node *p=final;
    while(l1 && l2){
        if(l1->data <l2->data){
            p->next=l1;
            l1=l1->next;
        }
        else{
            p->next=l2;
            l2=l2->next;
        }
    }
    if(l1){
        p->next=l1;
    }
    else{
        p->next=l2;
    }
    return final;
     
}
int main() {
    int i,data;
    Node *head=takeInput();
    cin>>i;
    // head =insertAt(head,i,data);
    head= deleteAt(head,i);
    print(head);
    // cout<<endl<<endl;
    // cout<<length(head)<<endl;
    // printAt(head,6);
    /*Node n1(1);
    Node *head=&n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    print(head);

    n1.next=&n2;
    cout << n1.data<<" "<<n2.data<<endl;
    Node *head=&n1;
    Node *n3=new Node(3);
    Node *n4=new Node(4);
    return 0;*/
}