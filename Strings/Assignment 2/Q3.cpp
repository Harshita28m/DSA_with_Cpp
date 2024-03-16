#include <bits/stdc++.h>
using namespace std;

int main() {
  string str = "hgdhpw";
  int count =0;
  for(int i=0;i<str.size();i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') {
    count++;
    for(int j=i+1;j<str.size();j++){
    if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u') count++;
    else break;
    }
    }
  }
  cout<<count;
    return 0;
}
