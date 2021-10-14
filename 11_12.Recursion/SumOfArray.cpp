#include <iostream>
using namespace std;
int sumOfArray(int a[],int n){
    if(n==0) return 0;
    return a[0]+sumOfArray(a+1,n-1);
}
int sumOfArray2(int a[],int n){
    if(n==0) return 0;
    return a[n-1]+sumOfArray(a,n-1);
}
int sumOfArray3(int a[],int n,int i){
    if(n==i) return 0;
    return a[0]+sumOfArray3(a,n,i+1);
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sumOfArray3(a,n,0);
}