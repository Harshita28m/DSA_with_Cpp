#include <bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& nums) {
        int idx = -1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx = i;
                break;
                }
        }
        sort(nums.begin()+idx+1,nums.end());
        int j=-1;
        for(int k=idx+1;k<nums.size();k++){
            if(nums[k]>nums[idx]){
            j=k;
                break;
            }
        }
                swap(nums[idx],nums[j]);

                if(idx == -1){
                    reverse(nums.begin(), nums.end());
                }
                
        
    }

int main(){
    vector<int> v1;
    v1={2,3,1};
    nextPermutation(v1);
    for(auto i : v1) 
    cout<<i<<" ";
   
}