#include <bits/stdc++.h>
using namespace std;
 int triplets(vector<int>& nums, int x) {
 int n = nums.size();
 int count =0;
 if (n <= 2) return 0; 
 for (int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++ ){
    int s=nums[i]+nums[j];
    for(int k=0;k<n;k++ && nums[k]!=i && nums[k]!=j){
        if(s+nums[k]== x){
            count++;
        }

    } 
 } 
 }
 return count;
 }
 int main(){
    vector<int> v1;
    int y=9;
    v1={1,3,-1,9,4,2,6};
    cout<<triplets(v1,y);
    return 0;
}