 #include <bits/stdc++.h>
using namespace std;
 void moveZeroes(vector<int>& nums){
    int n=nums.size();
    int i=0;
    int j=0;
while(j<n){
    if(nums[i]!=0){
     i++;
    }
    if(nums[j]==0){
         j++;
    }
    if(nums[i]==0 && nums[j]!=0 && i<j) {
        swap(nums[i],nums[j]);
        i++;
    }
   j++;
    }
    for(auto i: nums) cout<<i<<",";
 }

 int main(){
    vector<int> v1;
    v1={0,1,0,3,12};
    moveZeroes(v1);
    return 0;
}