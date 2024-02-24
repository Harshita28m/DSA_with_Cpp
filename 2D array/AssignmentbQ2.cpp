#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v1;
    v1={{1,2,3},{4,5,6},{7,8,9}};
    int m = v1.size();
    int n = v1[0].size();
   for (int i=0;i<m;i++){
        for(int j=i;j<n;j++){
            swap(v1[i][j], v1[j][i]);
        }
       
    }
     for (int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            swap(v1[0][j], v1[2][j]);
        }
       
    }

    for(auto i:v1){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}