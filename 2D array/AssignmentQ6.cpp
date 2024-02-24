#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v1;
    v1={{1,2,3},{4,5,6},{7,8,9}};
    int n=v1.size();
    int m=v1[0].size();
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
          if(i==(n/2) || j==(m/2)) {
            cout<<v1[i][j]<<" ";
          }
          else{
            cout<<" "<<" ";
          }
    }
    cout<<endl;
}
    
   
   
   return 0;
}