#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    v={3,6,0,6,3};
    int i=0;
    int flag=0;
    int j=v.size()-1;
    while(i<=j){
    if (v[i]!=v[j]){
    flag=1;
   }
   i++;
   j--;
   }
    if(flag==1){
        cout<<"not palindrome";
    }
    else{
        cout<<"palindrome";
    }
    }