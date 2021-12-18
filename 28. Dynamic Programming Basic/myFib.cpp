#include <iostream>
using namespace std;

int myfib(int n){
    int *arr=new int[n+1];
    arr[0]=1;
    arr[1]=1;
    for (int i=2 ;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    int out=arr[n];
    delete []arr;
    return out;
}

int main(){
    int n;
    cin>>n;
    cout<<myfib(n)<<endl;
}