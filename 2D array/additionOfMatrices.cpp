#include <bits/stdc++.h>
using namespace std;
int main(){
    int v1[2][2]={3,2,3,4};
    int v2[2][2]={3,2,3,4};
    int res[2][2];
    for (int i=0;i<2;i++){
    for (int j=0;j<2;j++)
    {
      res[i][j]=v1[i][j]+v2[i][j];
}
  }

for (int i=0;i<2;i++){
for (int j=0;j<2;j++)
    {
     cout<<res[i][j]<<",";


    }
    cout<<endl;
    }
}