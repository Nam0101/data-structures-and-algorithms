#include <iostream>
using namespace std;

bool isSorted(int a[],int n){
    if(n==0 ||n==1) return true;
    if(a[0]>a[1]) return false;
    bool isSmallestSorted = isSorted(a+1,n-1);
    return isSmallestSorted;
}
bool isSorted2(int a[],int n){
    if(n==0 ||n==1) return true;
    bool isSmallestSorted = isSorted(a+1,n-1);
    if(!isSmallestSorted) return false;
    if(a[0]>a[1]) return false;
    return true;

}
bool isSorted3(int a[],int n){
    if(n==0 ||n==1) return true;
    if(a[n-2]>a[n-1]) return false;
    return isSorted3(a,n-1);

}
int main(int argc, char **argv){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(isSorted2(a,n)){
        cout<<"Sorted";
    }
    else{
        cout<<"Unsorted";
    }
    
}