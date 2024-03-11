#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
         int ans=0;
        for(int i=0;i<nums.size();i++) ans=ans^nums[i];
        return ans;    
    }
 int main(){
    vector<int> v1;
    v1={2,2,1};
    cout<<singleNumber(v1);
    return 0;
}