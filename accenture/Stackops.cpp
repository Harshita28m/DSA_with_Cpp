#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(1);
    s.push(6);
    s.push(8);
while(s.size()>0){
cout<<s.top()<<" ";
s.pop();
}
}