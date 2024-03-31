#include <bits/stdc++.h>
using namespace std;

int main() {
    
string s="babad";
string ans="";
         
        if(s.length() == 1) cout<<s;
        else{
            for (int i=0;i<s.size()-1;i++){
            for(int j=i;j<s.size();j++){
            string str = s.substr(i, j - i + 1);
            string test = str;
            reverse(str.begin(), str.end());
            if(test == str && test.length()>ans.length()){
        ans= test;
        }
        }
    }
    }
    
   cout<<ans;
    return 0;
}