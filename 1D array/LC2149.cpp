#include <bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
    int n= nums.size();
        int i=0;
        int j=1;
        while(i<n && j<n){
            if(nums[i]>0) i+=2;
            if(nums[j]<0) j+=2;
            if(nums[i]<0 && nums[j]>0){
                swap(nums[i],nums[j]);
                i+=2;
                j+=2;
            }
        }
        for (auto i: nums){
        cout<<i<<" ";
        }
    }
int main(){
    vector <int> v1;
    v1={28,-41,22,-8,-37,46,35,-9,18,-6,19,-26,-37,-10,-9,15,14,31};
    rearrangeArray(v1);
    return 0;
}