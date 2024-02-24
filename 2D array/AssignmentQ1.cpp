#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> nums(5,vector<int>(5,0));
     for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            nums[i][j]=10;
        }
    }
    for(auto i:nums){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
  
}