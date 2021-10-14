#include <iostream>
using namespace std;

int lastIndexOfEle(int a[],int n,int x){
    if(n==0){ return -1;}
    if(a[n-1]==x){ return n-1;}
    return lastIndexOfEle(a,n-1,x);
}
int lastIndexOfEle2(int a[],int n,int x,int i){
    
}
int main(){
    int n,x;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    cout<<lastIndexOfEle(a,n,x);
}