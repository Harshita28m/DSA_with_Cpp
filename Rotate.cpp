#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> &v,int i, int j)
{
  
    while (i < j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    i++; j--;
    }

    return v;
}
vector<int> rotate(vector<int> &v, int k)
{
    k=k%v.size();
    // int i = 0;
    // int j =v.size()-k-1;
    reverse(v,0,v.size()-k-1);
    reverse(v,v.size()-k,v.size()-1);
    reverse(v,0,v.size()-1);
    // while (i < j)
    // {
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;
    // }
    // for (auto i : v)
    //     cout << i << ",";
    // cout << endl;
    // int a = v.size()-k;
    // int b = v.size()-1;
    // while (a < b)
    // {
    //     int temp = v[a];
    //     v[a] = v[b];
    //     v[b] = temp;
    //     a++;
    //     b--;
    // }
    // for (auto i : v)
    //     cout << i << ",";
    // cout << endl;
    // int c = 0;
    // int d = v.size()-1 ;
    // while (c < d)
    // {
    //     int temp = v[c];
    //     v[c] = v[d];
    //     v[d] = temp;
    //     c++;
    //     d--;
    // }
    // for (auto i : v)
    //     cout << i << ",";
    return v;
}
int main()
{
    vector<int> nums;
    nums = {-1,-100,3,99};
    rotate(nums, 2);
for(auto i: nums) cout<<i<<",";
}