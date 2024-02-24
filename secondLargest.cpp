#include <bits/stdc++.h>
using namespace std;
vector<int> getSecondOrderElements(int n, vector<int> arr)
{
    vector<int> sol;
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    int max2 = INT_MIN;
    int min2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (max2 < arr[i] && arr[i] != max)
        {
            max2 = arr[i];
        }
        if (min2 > arr[i] && arr[i] != min)
        {
            min2 = arr[i];
        }
    }
    cout << max << endl;
    cout << min << endl;
    cout << max2 << endl;
    cout << min2;
    sol.push_back(max2);
    sol.push_back(min2);
    return sol;

    // set<int>s;
    // copy(arr.begin(),arr.end(),inserter(s,s.begin()));
    // for(auto i:s) cout<<i<<",";
    // cout<<endl;
    // arr.clear();
    // copy(s.begin(),s.end(),back_inserter(arr));
    // for(auto i:arr) cout<<i<<",";
    // cout<<endl;
    // return arr[arr.size()-2];
}

int main()
{
    vector<int> v;
    v = {1, 1, 3, 3, 2, 2, 6, 7, 4, 4};
    getSecondOrderElements(v.size(), v);
}
