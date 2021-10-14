#include <iostream>
using namespace std;

int firstIndexOfEle(int a[],int n,int x,int i){
    if(i==n) return false; 
    if(a[i]==x) return i;
    return firstIndexOfEle(a,n,x,i+1);
}
int main(){
    int n,x;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    cout<<firstIndexOfEle(a,n,x,0);
}