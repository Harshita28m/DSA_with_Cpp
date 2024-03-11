#include <bits/stdc++.h>
using namespace std;
vector<int> sortColors(vector<int>& nums) {
        int no0=0;
        int no1=0;
        int no2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) no0++;
            if(nums[i]==1) no1++;
            if(nums[i]==2) no2++;
        }
        for(int j=0;j<nums.size();j++){
            if(j<no0) nums[j]=0;
            else if(j<(no0+no1)) nums[j]=1;
            else nums[j]=2;
        }
        return nums;
    }
int main(){
     vector<int> v;
    v={1,0,1,2,2,0,1,1,2,0,0};
    sortColors(v);
    for(auto i:v) cout<<i<<" ";
}