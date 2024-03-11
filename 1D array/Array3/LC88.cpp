#include <bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int>& nums1,int m, vector<int>& nums2, int n) {
        
        vector<int> nums;
       int i=0,j=0,k=0;
       
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                nums.push_back(nums1[i]);
                i++;
            
            }
            else{
                nums.push_back(nums2[j]);
             
                j++;
            }
            k++;
        }
        while(i<m ){
       nums.push_back(nums1[i]);
                i++;
                k++;
        }
         while(j<n){
        nums.push_back(nums2[j]);
                j++;
                k++;
        }
        for(i=0;i<k;i++){
            nums1[i]=nums[i];
        }
        return nums1;
    }
        
    
    int main(){
    vector<int> v1;
    vector<int> v2;
     
    int m=5;
    int n=6;
    v1={1,3,2,5,4};
    v2={4,6,7,8,9,2};
    merge(v1,m,v2,n);
    for(auto i : v1) 
    cout<<i<<" ";
   
}