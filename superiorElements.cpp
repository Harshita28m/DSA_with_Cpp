#include <bits/stdc++.h>
using namespace std;
void superiorElements(vector<int>&a) {
    vector<int> nums;
    int n=a.size();
    int i=0;
    int j=1;
    while(i<n && j<n){
        if(i==n-1) {
            nums.push_back(a[i]);
        }
        if(a[i]<a[j]) {
       i++;
       j++;
     }
        else if(a[j]<a[i]){
            j++;
            if(j==n-1){
                nums.push_back(a[i]);
            }
            else{
            i++;
            }
        }
    }
   for(auto i:nums){
        cout<<i<<" ";
    }
}
int main(){
vector<int> v1;
v1={1, 2, 3, 2};
superiorElements(v1);
return 0;
}