#include <bits/stdc++.h>
using namespace std;

int main() {
    
string ans="babad";
        if(s.length() == 1) return s;
        for (int i=0;i<s.size()-1;i++){
            for(int j=i;j<s.size();j++){
            string str = s.substr(i, j - i + 1);
            string test = str;
            reverse(str.begin(), str.end());
            if(test == str){
                if(test.length()>ans.length()){
                    ans= test;
                }
                
            }
        }
    }
   cout<<ans;
    return 0;
}