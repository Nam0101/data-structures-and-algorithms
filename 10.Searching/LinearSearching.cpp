#include <bits/stdc++.h>
using namespace std;

int linearSearching(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(a[i] == key){
            return i;
        }
    }
    return -1;
}
int main(int argc, char *argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"Enter key"<<endl;
    cin>>key;
    int pos =linearSearching(a,n,key);
    if(pos ==-1){
        cout<<"key not found"<<endl;
        return 0;
    }
    cout<<"key found:"<<pos<<endl;
    return 0;
}