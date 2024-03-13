#include <bits/stdc++.h>
using namespace std;

int main() {
   string s ="harshita is a student";
   stringstream ss(s);
 
   string temp;

   while(ss>>temp){
    cout<<temp<<endl;
   }

    return 0;
}