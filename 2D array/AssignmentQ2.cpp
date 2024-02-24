#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v1;
    v1={{1,2,3},{4,5,6},{7,8,9}};
    int n=v1.size();
    int m=v1[0].size();
     vector<vector<int>> v2;
    v2={{4,5,8},{0,0,8},{1,2,0}};
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            v1[i][j]=v1[i][j]+v2[i][j];
        }
    }
    for(auto i:v1){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
  
}