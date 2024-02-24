#include <bits/stdc++.h>
using namespace std;
void Transpose(vector<vector<int>>& nums){
    int m=nums.size();
    int n= nums[0].size();
    vector<vector<int>> t(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t[i][j]=nums[j][i];
        }
    }
for (auto i : t) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main(){
    vector<vector<int>> v1;
    v1={{3,2},{3,4},{5,6}};
    Transpose(v1);
  
}