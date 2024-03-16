#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n =strs.size();
        string first=strs[0];
        string last=strs[n-1];
        string t="";
        for(int i=0;i<min(first.length(),last.length());i++){
            if(first[i]==last[i]){
             t+= first[i];
             }
             else return t;
        }
        return t;
    }
    int main(){
        vector <string> v ={"harshita", "harshu"};
        cout<<longestCommonPrefix(v)<<endl;

    }
