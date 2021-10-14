#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int majorityElement(vector<int> &A){
        int card=A[0];
        int count=1;
        int n=A.size();
        
        for(int i=1; i<n; i++){
            if(A[i]==card){
                count++;
            }
            else
            {
                count--;
                if(count==0){
                    card=A[i];
                    count=1;
                }
            }
        }
        int count2=0;
        for(int i=1;i<n;i++){
            if(A[i]==card){
                count2++;
            }
        }
        if(count2>n/2) return card;
        else return -1;
        return card;
    }
};
