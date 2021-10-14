#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> nums;
    void getNum(int n){
        for(int i=0;i<n;i++){
            nums.push_back(i);
        }
    }
    int getFirst(int target){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
            int mid=s/2+(e-s)/2;
            
            if(nums[mid]==target){
                ans= mid;
                e=mid-1;
            }
            else if(nums[mid]<target){
                    s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
    int getFirst(int target){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
            int mid=s/2+(e-s)/2;
            
            if(nums[mid]==target){
                ans= mid;
                e=mid-1;
            }
            else if(nums[mid]<target){
                    s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
    int getLast(int target){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
            int mid=s/2+(e-s)/2;
            
            if(nums[mid]==target){
                ans= mid;
                s=mid+1;
            }
            else if(nums[mid]<target){
                    s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(int target){
            vector<int> v(2,-1);
            int first=getFirst(target);
            if(first==-1){
                return v;
            }
            int last=getLast(target);
            v[0]=first;
            v[1]=last;
    }
};
