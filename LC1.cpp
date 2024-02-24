#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int k) {
    int n= nums.size();
    vector<int> v;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==k){
                v.push_back(i);
                v.push_back(j);
            }
        }
    }
    for(auto i:v) cout<<i<<",";
    }
 int main(){
    vector<int> v1;
    v1={2,7,11,15};
    twoSum(v1,9);
    return 0;
}