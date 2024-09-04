#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cout<<"enter the number";
   cin>>n;
   set<int> m;
   m.insert(47);
   m.insert(74);
   m.insert(447);
   m.insert(474);
   m.insert(744);
   m.insert(747);
   m.insert(774);
   if(n%4==0 || n%7 ==0 || m.find(n)!=m.end()) cout<<"yes";
   else cout<<"no";
}