#include <bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
        int mid = (low+high)/2;
        if(target==nums[mid]) return mid;
         if(target<nums[mid]) high = mid-1;
          else low = mid+1;

        }  
        return -1; 
    }
    int main(){
        vector<int> nums = {-1,0,3,5,9,12};
        int target = 9;
        cout<<search(nums,target);
    }
