#include <bits/stdc++.h>
using namespace std;
// string reverseWords(string s) {
//     stringstream ss(s);
//     string temp;
//     vector <string> v;
//     while(ss>>temp){
//         v.push_back(temp);
//     }
//    vector <string> t;
//    int n= v.size();
//    for (int i=n-1;i>=0;i--){
//        t.push_back(v[i]);
//        if(i==0) break;
//        t.push_back(" ");
//       }
//       string result = accumulate(t.begin(), t.end(), string(""));
//         return result;
//     }
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