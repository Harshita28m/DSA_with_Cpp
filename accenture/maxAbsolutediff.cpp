#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v={1,2,12,13,15,17,26,30};
    int input = 27;
    int mini=INT_MAX;
    for (int i =0;i<v.size();i++){
        mini=min(mini,v[i]);

    }
    cout<<input-mini;

}