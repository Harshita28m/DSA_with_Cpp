#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v1;
    v1={{1,2,3},{4,5,6},{7,8,9}};
    int n=v1.size();
    int m=v1[0].size();
    int maxi=INT_MIN;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(v1[i][j]>maxi){
            maxi=v1[i][j];
           }
        }
    }
   
    cout<<maxi;
   
   return 0;
}