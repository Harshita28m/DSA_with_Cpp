#include <bits/stdc++.h>
using namespace std;

int main() {
    string s="physicswallah";
    string t="wallahphysics";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<"yes";
    else cout<<"no";
   

    return 0;
}