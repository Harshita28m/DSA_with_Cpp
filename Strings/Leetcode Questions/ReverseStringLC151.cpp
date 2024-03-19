#include <bits/stdc++.h>
using namespace std;
int main() {
    string s="the sky is blue";
    stringstream ss(s);
    string temp;
    vector <string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    int n= v.size();
   for (int i=n-1;i>=0;i--){
       cout<<v[i]<<" ";
      }
        
    return 0;
}