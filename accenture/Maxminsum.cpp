#include <bits/stdc++.h>
using namespace std;
int main(){
   vector<int> v1;
   v1={1,4,7,3,2};
   sort(v1.rbegin(),v1.rend());
   for(auto i:v1) cout<<i;
   vector<int> v2;
   v2={4,8,2,5,9,6};
   set<int> s1;
   set<int> s2;
   copy(v1.begin(),v1.end(),inserter(s1,s1.begin()));
   copy(v2.begin(),v2.end(),inserter(s2,s2.begin()));
  copy(s1.begin(),s1.end(),v1.begin());
  copy(s2.begin(),s2.end(),v2.begin());
  cout<<v1[v1.size()-1] + v2[0];

}