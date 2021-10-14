#include <iostream>
using namespace std;
void printArray(int *b,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<*(b+i*n+j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    int *b=&a[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    printArray(b,m,n);
}