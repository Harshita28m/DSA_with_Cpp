#include <bits/stdc++.h>
using namespace std;



int main(){
   map<char,int> m;
   m['A'] =1; 
   m['B'] =10; 
   m['C'] =100; 
   m['D'] =1000; 
   m['E'] =10000; 
   m['F'] =100000; 
   m['G'] =1000000; 
 string str;
 cout<<"enter the string"<<endl;
 cin>>str;
 int ans=0;
 for(int i=0;i<str.length();i++){
    if(m.find(str[i]) != m.end()) ans+= m[str[i]];
 }
cout<<ans;
}