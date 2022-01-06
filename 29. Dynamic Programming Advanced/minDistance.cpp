#include <iostream>
using namespace std;

int minDistance(string s1,string s2){
    int m=s1.size();
    int n=s2.size();

    int dp[m+1][n+1];
    for(int i=0; i<=m ;i++){
        for(int j=0; j<=n; j++){
            if(i==0){
                dp[i][j]=j;
            }
            if(j==0){
                dp[i][j]=i;
            }
            else if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }
            else{
                int insert=dp[i][j-1];
                int del=dp[i-1][j];
                int replace=dp[i-1][j-1];
                dp[i][j]=1+min(insert,min(del,replace));
            }
        }
    }
    return dp[m][n];

}

int main(){
    string s1, s2;
    cin>>s1>>s2;
    cout<<minDistance(s1,s2)<<endl;
}
