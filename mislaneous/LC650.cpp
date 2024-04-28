#include <bits/stdc++.h>
using namespace std;

int hf(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return n/i;
    }
    return 1;
}
    int minSteps(int n) {
       int count=0;
       while(n>1){
       
        int y =hf(n);
        count =count+(n/y);
        n=y;
       }
return count;
    }

int main(){
    int n;
    cin>>n;
    cout<<minSteps(n);
    return 0;
}