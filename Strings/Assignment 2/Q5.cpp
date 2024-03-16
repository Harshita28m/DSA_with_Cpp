#include <bits/stdc++.h>
using namespace std;

int main() {
   string str = "decode dsa with pw";
   vector <string> v;
   stringstream ss(str);
   string temp;
   while(ss>>temp){
    v.push_back(temp);
   }
   sort(v.begin(),v.end());
   for (auto i: v){
    cout<<i<<endl;
   }
   cout<<v[v.size()-1];
   return 0;
}
