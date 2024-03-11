#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
       int n= prices.size();
       int profit=0;
        for(int i=1;i<n;i++){
          int k=prices[i]-prices[i-1];
          if(k>profit) profit=k;
          else continue;
            
        }
        return profit;
    }
int main(){
    vector <int> v1;
    v1={7,1,5,3,6,4};
    cout<<maxProfit(v1);
    return 0;
}