#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    Solution(int m,int n){
        vector<vector<int> >matrix;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            matrix.push_back();
            }
        }
    }
    vector<int> spriralOrder(vector<vector<int> > &matrix){
        vector<int> ans;
        int m=matrix.size();
        int n=matrix[0].size();
        if(m==0 || n==0) return ans;
        int sr=0,er=m-1,sc=0,ec=n-1,count=0;
        while(sr<=er && sc<=ec){
            for(int i=sc;i<=ec;i++){
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
            if(count==m*n) return ans;
            for(int i=sr;i<=er;i++){
                ans.push_back(matrix[i][ec]);
                count++;
            }
            ec--;
            if(count==m*n) return ans;
            for(int i=ec;i>=sc;i++){
                ans.push_back(matrix[er][i]);
                count++;
            }
            if(count==m*n) return ans;
            for(int i=er;i>=sr;i--){
                ans.push_back(matrix[i][sc]);
                count++;
            }
            if(count==m*n) return ans;
        }
        return ans;
    }
};
int main(){
    int m,n;
    cin >>m>>n;
    Solution matrix(m,n);
    
}