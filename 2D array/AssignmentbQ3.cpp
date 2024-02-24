#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v1;
    vector<int> v;
    v1={{1,2,3},{4,5,6},{7,8,9}};
    int m = v1.size();
    int n = v1[0].size();
   for (int j=0;j<n;j++){
    if(j%2==0){
        for(int i=m-1;i>=0;i--){
          v.push_back(v1[i][j]);
        }
    }
        else{
            for(int i=0;i<m;i++){
                 v.push_back(v1[i][j]);
            }
        }


}
for(auto i:v){
    cout<<i<<" ";
        }
      
     

    
}