#include <bits/stdc++.h>
using namespace std;
bool check(vector<int>& nums) {
        int flag=0;
        for(int i=0;i<nums.size()-1;i++){      //2,1,3,4
            if(nums[i+1]<nums[i]) flag++;
            
            }
            if(nums[nums.size()-1]>nums[0]) flag++;
            cout<<flag;
if(flag>1) return false;
else return true;
            }
    

// vector<int> rotate(vector<int> &v, int k)
// {
//    k=k%v.size();
//           reverse(v.begin() , v.end()-k);
        
//          reverse(v.begin()+(v.size()-k) , v.end());
        
//         reverse(v.begin() , v.end());
//     return v;
// }
// bool check(vector<int>& nums) {
//         for(int i=0;i<nums.size();i++){
//             if(nums[i+1]>=nums[i]){
//                 return true;
//             }
//             else{
//                 (rotate(nums,i+1));
//                     if(nums[i+1]>=nums[i]){
//                         return true;}
//                     else {
//                         return false;}
                
//             }
//         }
//     }
    int main(){
        vector<int> v;
        v={2,1,3,4};
        check(v);
    }
