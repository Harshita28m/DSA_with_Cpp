#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;

}
int main(){
   int arr[]={10,-12,2,5,3,15,17,21,-3,-4};
   int size= sizeof(arr)/sizeof(arr[0]);
   int ans=0;
   for (int i=2;i<size;i++){
   if(isPrime(i)) ans+=arr[i];
   }
cout<<ans;

}