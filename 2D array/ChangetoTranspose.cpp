#include <bits/stdc++.h>
using namespace std;
void Transpose(vector<vector<int>>& nums){
    int m=nums.size();
    int n=nums[0].size();
    for(int i=0;i<m;i++){
        for(int j=i;j<n;j++){
            swap(nums[i][j],nums[j][i]);
        }
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
    v1={{3,2},{3,4}};
    Transpose(v1);
  
}