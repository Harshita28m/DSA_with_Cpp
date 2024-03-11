#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    v={1,3,4,5,9,6};
    int sum1=0;
    int sum2=0; 
    int ans;
    for(int i=0;i<v.size();i+=2) sum1+=v[i];
    for(int j=1;j<v.size();j+=2) sum2+=v[j];
    ans=sum1-sum2;
    cout<<ans;
    
}