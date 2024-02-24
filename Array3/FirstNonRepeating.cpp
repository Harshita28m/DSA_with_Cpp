#include <bits/stdc++.h>
using namespace std;
int fistNonRepeating(vector<int> &nums)
{
    int n = nums.size();
    int k;
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j]) break;
             if (j == n )
            {
                flag = 1;
            }
           
        }
         if (flag == 1)
            {
                k = nums[i];
                break;
            }
    }
    return k;
}

int main()
{
    vector<int> v1;
    v1 = {3,2,3,4,7,2};
    cout << fistNonRepeating(v1);
    return 0;
}
//wrong ans