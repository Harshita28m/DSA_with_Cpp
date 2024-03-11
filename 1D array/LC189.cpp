#include<bits/stdc++.h>
using namespace std;
   vector<int> rotate(vector<int>& nums, int k) {
    k=k%nums.size();
        reverse(nums.begin() , nums.end()-k);
        for(auto i:nums)   cout<<i<<",";
        cout<<endl;
         reverse(nums.begin()+(nums.size()-k) , nums.end());
         for(auto i:nums)   cout<<i<<",";
          cout<<endl;
        reverse(nums.begin() , nums.end());
         for(auto i:nums)   cout<<i<<",";
        

        return nums;

        // vector<int> v(nums.size());
        // for(int i=0;i<v.size();i++){
        //    v[(i+k)%v.size()]=nums[i];    //i=4  k=3  v.size()=7 
        // }
        // for(auto i:v){
        //     cout<<i<<",";
        // }
    }
int main(){
    vector<int> nums;
    // vector<int> sol;
    nums ={1,2,3,4,5,6,7};
    
    rotate(nums,3);
//   for(auto i:nums){
//             cout<<i<<",";
//          }
  
    }

//1,2,3,4,5,6,7
//5,6,7,1,2,3,4


// 0,1,2,3,4,5,6
// 5,6,7,1,2,3,4 

// -1,-100,3,99


// -1,2
// 2,-1
// -1,2
// 2,-1
// -1,2
// 2,-1
// -1,2
// 2,-1