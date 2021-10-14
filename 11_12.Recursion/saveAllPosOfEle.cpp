#include <iostream>
#include <vector>
using namespace std;

void saveAllPosOfEle(int a[],int n,int x,int i,vector<int> &ans){
    if(i==n){
        return;
    }
    if(a[i]==x){
        ans.push_back(i);
    }
    saveAllPosOfEle(a,n,x,i+1,ans);
}

int main(){
    int n,x;
    vector<int> ans;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    saveAllPosOfEle(a,n,x,0,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans.at(i)<<" ";
    }
}