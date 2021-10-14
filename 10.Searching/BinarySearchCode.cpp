#include <bits/stdc++.h>
using namespace std;

int BinarySearchCode(int a[],int n,int key){
    int s=0,e=n-1;
    int mid;
    while(s<=e){
        mid=s+(e-s)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(int argc, char **argv){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"Enter key"<<endl;
    cin>>key;
    int pos=BinarySearchCode(a,n,key);
    if(pos ==-1){
        cout<<"key not found"<<endl;
        return 0;
    }
    cout<<"key found:"<<pos<<endl;
    return 0;
}