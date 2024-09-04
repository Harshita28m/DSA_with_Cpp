#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Reverses a given integer m.
 *
 * @param m An integer to be reversed.
 *
 * @return The reversed integer.
 */
int reversenum(int m){
    int r=0;
    while(m>0){
        r*=10;
        r+=m%10;
        m=m/10;
    }
    return r;
}
int main(){
     set<int> s;
     vector<int> nums={1,13,10,12,31};
        for (int i=0;i<nums.size();i++){
            int rev = reversenum(nums[i]);
            s.insert(nums[i]);
            s.insert(rev);
        }
        cout<<s.size();
   }

