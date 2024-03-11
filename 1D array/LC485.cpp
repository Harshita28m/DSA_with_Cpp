#include <bits/stdc++.h>
using namespace std;
void findMaxConsecutiveOnes(vector<int>& nums) {
    int n=nums.size();
        int count = 0;
        int i=0;
        int j=0;
        while(j<n){
            if(nums[j] ==0){
                count = max(count,j-i);
                i=j+1;
            }
           else if(nums[j]==1 && j==n-1){
            count = max(count,j-i+1);  
            }
            j++;
        }
        cout<<count;
    }

    int main(){
    vector<int> v1;
    v1={1,1,0,1,1,1};
    findMaxConsecutiveOnes(v1);
    return 0;
}