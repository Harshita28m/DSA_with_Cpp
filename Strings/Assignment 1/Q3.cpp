#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str, '\n');
    int n =str.length();
   string rev=str;
   reverse(rev.begin(), rev.end());
   if(rev==str)  cout<<"yes";
   else  cout<<"no";

    return 0;
}