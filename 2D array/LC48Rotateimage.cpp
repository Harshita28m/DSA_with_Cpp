#include <bits/stdc++.h>
using namespace std;
void RotateImage(vector<vector<int>>& nums){
    int m=nums.size();
    int n=nums[0].size();
    for(int i=0;i<m;i++){
        for(int j=i;j<n;j++){
            swap(nums[i][j],nums[j][i]);
        }
    }
    for(int i=0;i<m;i++){
        reverse(nums[i].begin(),nums[i].end());
        // int left=0, right=n-1;
        // while(left<=right){
        //     swap(nums[i][left],nums[i][right]);
        //     left++;
        //     right--;

        }
    
    for (auto i : nums) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main(){
    vector<vector<int>> v1;
    v1={{3,2},{1,4}};
    RotateImage(v1);
  
}