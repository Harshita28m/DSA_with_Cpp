#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& nums) {
    int n= nums.size();
    sort(nums.begin(),nums.end());
    int i=1;
    int maxi=1;
    int count=1;
    while(i<n){
        if(nums[i]==nums[i-1]+1){
            i++;
            count++;
            maxi = max(count, maxi);
        }
        else if(nums[i]!=nums[i-1]+1){
            count=1;
            i++;
            }
        
    }
return maxi;
        
    }

int main(){
vector<int> v1;
v1={100,4,200,1,3,2};
cout<<longestConsecutive(v1);
return 0;
}