#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v = {5, 2, 1, -2, 4, -1,3};
    unordered_map<int, int> m;
    int count = 1;
    for (int i = 0; i < v.size(); i++)
    {
        m[v[i]]++;
    }
    while (count)
    {
        if (m.find(count) != m.end())
        {
            count++;
        }
        else break;
    }
    cout << count;
}

//{5:1,2:1,1:1,-2:1,4:1,-1:1}