#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    v={-1,3,-4,-5,9,6};
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]<0) i++;
        if(v[j]>0) j--;
        if(i>j) break;
        if(v[i]>0 && v[j]<0){
            int temp = v[i];
            v[i]=v[j];
            v[j]=temp;
        }
    }
    for(auto i:v) cout<<i<<" ";
    
}