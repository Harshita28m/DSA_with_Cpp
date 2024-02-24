#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v1;
    v1={{1,2,3},{4,5,6},{7,8,9}};
    int m = v1.size();
   for (int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j) cout<<v1[i][j];
            else if(i+j==m-1) cout<<v1[i][j];
            else cout<<" ";
        }
        cout<<endl;
    }




  
  
}