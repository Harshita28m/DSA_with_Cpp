#include <bits/stdc++.h>
using namespace std;
 


 int main(){
 vector<int> nums;
 nums ={1,2,3,4};
 nums.erase(nums.begin());
 for (auto i:nums){
    cout<<i<<endl;
 }



 string s = "10thinkthink";
 int b = stoi(s);
 cout<<b<<endl;
 cout<<to_string(b).size()<<endl;
 if(b==(s.size() - to_string(b).size())) cout<<"TRUE"<<" "<<b;
 else cout<<"FALSE"<<" "<<s.size()-to_string(b).size();
    return 0;
 }


