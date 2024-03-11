#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    v={1,3,4,5,9,6};
    for(int i=0;i<v.size();i+=2) v[i]=v[i]+10;
    for(int j=1;j<v.size();j+=2) v[j]=v[j]*2;
   for(auto i:v){
    cout<<i<<" ";
   }
    
}