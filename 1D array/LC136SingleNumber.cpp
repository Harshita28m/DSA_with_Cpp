#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
    int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
        }
        return ans;
    }
    int main(){
        vector<int> v;
        v={1,2,2,4,4,5,5,1,6};
        cout<<singleNumber(v);

    }