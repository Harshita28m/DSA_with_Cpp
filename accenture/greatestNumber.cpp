#include <bits/stdc++.h>
using namespace std;

int main(){
   int arr1[]={1,45,2,79};
   int arr2[]={89,3,5,7,8};
   int n1= sizeof(arr1)/ sizeof(arr1[0]);
   int n2= sizeof(arr2)/ sizeof(arr2[0]);
   int max1=INT_MIN;
   int max2=INT_MIN;
   int min1=INT_MAX;
   int min2=INT_MAX;
   int n3=max(n1,n2);
   int ans=0;

   for(int i=0;i<n3;i++){
   if(n1>i){
    max1=max(arr1[i],max1);
    min1=min(arr1[i],min1);
   }
   if(n2>i){    
    max2=max(arr2[i],max2);
    min2=min(arr2[i],min2);
   }
   }
   cout<<max1<<","<<max2<<","<<min1<<","<<min2<<endl;
   ans = max((max1-min2),(max2-min1));
   cout<<ans;


}