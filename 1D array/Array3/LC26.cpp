 #include <bits/stdc++.h>
using namespace std;
void removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=0;
        vector<int> v;
   
        while(j<nums.size() ){
            if(nums[i]==nums[j]){
                j++;
            }
            else{
               v.push_back(nums[i]);
                i=j;
                
            }
             if (i < nums.size()) {
        v.push_back(nums[i]);
    }
        }
        nums = v;
         for(auto i:nums) cout<<i<<",";
        cout<<endl;
        int k = nums.size();
       // return k;
         cout<<k;

    }
    int main(){
    vector<int> v1;
    v1={0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    removeDuplicates(v1);
    return 0;
}