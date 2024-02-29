#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    
    v={1,2,3,4};
    int n= v.size();
    cout<<n<<endl;
    // v.clear();
    for(int i= v.size();i>0;i--){
        v.pop_back();
    }
    int m = v.size();
    cout<<m<<endl;
    for(int i=0;i<v.capacity();i++){
        cout<<v[i]<<' ';
    }
    cout<<endl;
    vector<int> m(v);
    for(auto i:m){
        cout<<i<<" ";
    }
    v.shrink_to_fit();
    cout<<v.capacity()<<endl;
    for(int i=0;i<v.capacity();i++){
        cout<<v[i]<<' ';
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<v[i]<<' ';
    }
    
}