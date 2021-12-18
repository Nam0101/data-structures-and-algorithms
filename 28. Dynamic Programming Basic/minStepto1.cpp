#include <iostream>
using namespace std;

int helper(int n, int *arr){
    if(n <= 1){
        return 0;
    }
    if(arr[n] != -1){
        return arr[n];
    }
    int x,y,z;
    y=z=INT_MAX;
    x=helper(n-1,arr);
    if(n % 2 == 0){
        y=helper(n/2,arr);
    }
    if(n % 3 == 0){
        z=helper(n/3,arr);
    }
    int output=min(x,min(y,z))+1;
    arr[n]=output; 
    return output;
}

int minStep2(int n){
    int *arr=new int[n+1];
    for(int i=0; i<=n; i++){
        arr[i]=-1;
    }
    return helper(n,arr);
}

int myRecusion(int n){
    if(n <= 1){
        return 0;
    }
    int x,y,z;
    y=z=INT_MAX;
    x=myRecusion(n-1);
    if(n % 2 == 0){
        y=myRecusion(n/2);
    }
    if(n % 3 == 0){
        z=myRecusion(n/3);
    }
    int ans=min(x,min(y,z))+1; 
    return ans;
}
int minSteps3(int n){

   int *dp = new int[n+1];
   dp[0] = 0;
   dp[1] = 0;

   /// dp[i] = min steps needed to move from i->1  , ans = dp[n]

   for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + 1 ;

        if(i%2==0){
            dp[i] = min(dp[i],dp[i/2] + 1);
        }
        if(i%3==0){
            dp[i] = min(dp[i],dp[i/3] + 1);
        }
   }

   int ans = dp[n];
   delete []dp;
   return ans;


}

int main(){
    int n;
    cin>>n;
    //cout<<myRecusion(n)<<endl;
   // cout<<minStep2(n)<<endl;
    cout<<minSteps3(n)<<endl;
}