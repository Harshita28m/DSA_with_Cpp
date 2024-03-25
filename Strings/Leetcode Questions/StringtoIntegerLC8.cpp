#include <bits/stdc++.h>
using namespace std;

int main() {
    string s ="words and 987";
    string ans="";
        for(int i=0;i<s.size();i++){
            if ((s[i] >= '0' && s[i] <= '9') || s[i] == '-') ans=ans+s[i];
            else continue;
           }
            int k = stoi(ans);
            cout<<k;
            return 0;
        
    }