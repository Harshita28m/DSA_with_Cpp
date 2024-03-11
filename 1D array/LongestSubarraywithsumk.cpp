#include <bits/stdc++.h>
using namespace std;

    int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n= a.size();
    int i=0;
    int j=0;
    int count =0;
    int sum=0;
    int max=0;
while(j<n){
            sum+=a[j];
    if(sum<k){
        j++;
        count++;
    }
   
    if(sum>k){
        sum=sum-a[i];
        
        i++;
        j++;
        if(count>max){
            max=count;
            count=1;

        }
        if(sum==k){
        sum=sum-a[i];  
        i++;
        if(a[i]==0){
            count++;
            if (count > max) {
              max = count;
            }
            else{
                count=0;
            }
        }
        
        }

    }
     if(sum==k){
        count++;
        sum=sum-a[i];
        i++;
        j++;
        if(count>max){
            max=count;
            
        }
        if (i==j) {
            count = 0;
        }
        else{
            count=1;
        }
    }
    
}
return max;
    }

        

 int main(){
    vector<int> v1;
    v1={1, 2, 3, 1, 1, 1, 1};
    cout<<longestSubarrayWithSumK(v1,3);
    return 0;
}