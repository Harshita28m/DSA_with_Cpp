#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v1;
    v1={{1,2,3},{7,8,9},{4,5,6}};
    int n=v1.size();
    int m=v1[0].size();
    int maxi=INT_MIN;
    int k=0;
     for(int i=0;i<n;i++){
        int sum =0;
        for(int j=0;j<m;j++){
            sum=sum+v1[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            k=i;
           }
    }
   cout<<maxi<<endl;
   cout<<k;
   
   return 0;
}