#include <bits/stdc++.h>
using namespace std;

int main() {
    string s="(()())(())";
    int n = s.size();
    vector <string> v;
        int i=0;
        int j=1;
        while(j<n){
            if(s[i]==s[j]) j++;
            else if(s[j]!=s[i] && s[j]!=s[j-1]) {
               v. push_back( s.substr(j-1, 2));
                j++;
            }
            else if(s[j]== s[j-1]) {
                j+=2;
                i=j-1;
            }
        }
        for(auto i:v){
            cout<<i;
        }

    return 0;
}