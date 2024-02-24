#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    // int x;
    v={1,2,3,4,5};
// cout<<"Enter the value to be checked for:";
// cin>>x;
    int count=0;
    for(int j=0;j<v.size();j++){
        if(v[j]>3){
            count++;
        }
        
    }
    cout<<"The count is:"<<count;
}