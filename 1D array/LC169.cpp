#include <bits/stdc++.h>
using namespace std;
void majorityElement(vector<int>& nums) {
    int n=nums.size();
        int i=0;
        int j=0;
        int maxi=0;
        int count=0;
        int k;
        sort(nums.begin(),nums.end());
        while(j<n){
        if(nums[i]==nums[j]){
            count++;
            if(count>maxi){
            maxi=count;
            k=nums[i];
            }
        }
        else{
            i=j;
            count=1;
           }
            j++;
    }
   cout<<k;
    }
    int main(){
    vector<int> v1;
    v1={3,2,3};
    majorityElement(v1);
    return 0;
}