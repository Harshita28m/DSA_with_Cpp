#include <bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>>& matrix) {
int m = matrix.size();
int n = matrix[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                int a=i;
                int b=j;
                for(int k=0;k<m;k++){
                    matrix[k][b]=0;
                }
                for(int c=0;c<n;c++){
                    matrix[a][c]=0;
                }
            }
        }
        
    }
       for(auto i:matrix){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
       } 
    }
int main(){
vector<vector<int>> v1;
v1={{1,1,1},{1,0,1},{1,1,1}};
 setZeroes(v1);
return 0;
}