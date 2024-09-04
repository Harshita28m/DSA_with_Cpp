#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main(){
    stack<int> s;
    stack<int> st;
    s.push(1);
    s.push(6);
    s.push(8);
while(s.size()>0){
st.push(s.top());
s.pop();
}
while(st.size()>0){
cout<<st.top()<<" ";
st.pop();
}
}